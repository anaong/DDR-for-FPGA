`default_nettype none
`timescale 1ns / 1ps

module arrow_movement #(parameter CORDW = 10
                       ,parameter ARROWY_BEGIN = 480
                       ,parameter ARROW_SPEED = 5
                       ,parameter ARROW_COUNT = 4) (
    input  wire [0:0] clk_i,
    input  wire [0:0] frame_i,
    input  wire [0:0] launch_i,
    input  wire [0:0] btn_i,
    //input  wire [3:0] timing_i,
    output wire [(CORDW*ARROW_COUNT)-1:0] arrow_y_o,
    //output wire [3:0] judge_o,
    output wire [0:0] next_o
    //output wire [47:0] arrow_color_o
    );
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //y position for all 4 arrows
    logic [CORDW-1:0] arrow1_l;
    logic [CORDW-1:0] arrow2_l;
    logic [CORDW-1:0] arrow3_l;
    // logic [CORDW-1:0] arrow4_l;
    assign arrow_y_o = {arrow1_l, arrow2_l, arrow3_l};//, arrow4_l};
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //state machine for the arrows
    enum logic [1:0] {state_wait_s  = 2'b00,
                      state_count_s = 2'b01,
                      state_move_s  = 2'b10,
                      state_judge_s = 2'b11
                     }state_r1, state_n1
                     ,state_r2, state_n2
                     ,state_r3, state_n3;
                    //  ,state_r4, state_n4;

    //change state
    always_ff @(posedge clk_i) begin
        state_r1 <= state_n1;
        state_r2 <= state_n2;
        state_r3 <= state_n3;
        // state_r4 <= state_n4;
    end

    //determines when the state machine goes back to the waiting state state_wait_s
    logic [0:0] reset1_l = arrow1_l <= 0 | arrow1_l >= 485 | state_r1 == state_judge_s;
    logic [0:0] reset2_l = arrow2_l <= 0 | arrow2_l >= 485 | state_r2 == state_judge_s;
    logic [0:0] reset3_l = arrow3_l <= 0 | arrow3_l >= 485 | state_r3 == state_judge_s;
    // logic [0:0] reset4_l = arrow4_l <= 0 | arrow4_l >= 485 | state_r4 == state_judge_s;
    
    //arrow 1
    always_comb begin
        case({state_r1, launch_i, btn_l[0], reset1_l})
            {state_wait_s, 1'b1, 1'b0, 1'b0} : begin
                if(arrow_counter_l == 2'b00) begin
                    state_n1 = state_count_s;
                end else begin
                    state_n1 = state_wait_s;
                end
            end
            {state_count_s, 1'b0, 1'b0, 1'b0} : begin
                state_n1 = state_move_s;
            end
            {state_move_s, 1'b0, 1'b1, 1'b0},
            {state_move_s, 1'b0, 1'b0, 1'b1}  : begin
                state_n1 = state_judge_s;
            end
            {state_judge_s, 1'b0, 1'b0, 1'b1},
            {state_judge_s, 1'b0, 1'b0, 1'b0} : begin
                state_n1 = state_wait_s;
            end
            default : state_n1 = state_r1;
        endcase
    end

    //arrow 2
    always_comb begin
        case({state_r2, launch_i, btn_l[1], reset2_l})
            {state_wait_s, 1'b1, 1'b0, 1'b0} : begin
                if(arrow_counter_l == 2'b01) begin
                    state_n2 = state_count_s;
                end else begin
                    state_n2 = state_wait_s;
                end
            end
            {state_count_s, 1'b0, 1'b0, 1'b0} : begin
                state_n2 = state_move_s;
            end
            {state_move_s, 1'b0, 1'b1, 1'b0},
            {state_move_s, 1'b0, 1'b0, 1'b1}: begin
                state_n2 = state_judge_s;
            end
            {state_judge_s, 1'b0, 1'b0, 1'b1},
            {state_judge_s, 1'b0, 1'b0, 1'b0} : begin
                state_n2 = state_wait_s;
            end
            default : state_n2 = state_r2;
        endcase
    end

    //arrow 3
    always_comb begin
        case({state_r3, launch_i, btn_l[2], reset3_l})
            {state_wait_s, 1'b1, 1'b0, 1'b0} : begin
                if(arrow_counter_l == 2'b10) begin
                    state_n3 = state_count_s;
                end else begin
                    state_n3 = state_wait_s;
                end
            end
            {state_count_s, 1'b0, 1'b0, 1'b0} : begin
                state_n3 = state_move_s;
            end
            {state_move_s, 1'b0, 1'b1, 1'b0},
            {state_move_s, 1'b0, 1'b0, 1'b1} : begin
                state_n3 = state_judge_s;
            end
            {state_judge_s, 1'b0, 1'b0, 1'b1},
            {state_judge_s, 1'b0, 1'b0, 1'b0} : begin
                state_n3 = state_wait_s;
            end
            default : state_n3 = state_r3;
        endcase
    end

    // //arrow 4
    // always_comb begin
    //     case({state_r4, launch_i, btn_l[3], reset4_l})
    //         {state_wait_s, 1'b1, 1'b0, 1'b0} : begin
    //             if(arrow_counter_l == 2'b11) begin
    //                 state_n4 = state_count_s;
    //             end else begin
    //                 state_n4 = state_wait_s;
    //             end
    //         end
    //         {state_count_s, 1'b0, 1'b0, 1'b0} : begin
    //             state_n4 = state_move_s;
    //         end
    //         {state_move_s, 1'b0, 1'b1, 1'b0},
    //         {state_move_s, 1'b0, 1'b0, 1'b1} : begin
    //             state_n4 = state_judge_s;
    //         end
    //         {state_judge_s, 1'b0, 1'b0, 1'b1},
    //         {state_judge_s, 1'b0, 1'b0, 1'b0} : begin
    //             state_n4 = state_wait_s;
    //         end
    //         default : state_n4 = state_r4;
    //     endcase
    // end
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //state machine outputs
    //state_judge_s : gets the y position of the arrow when the button was pressed
    //state_count_s : tells ram to go to next line in chart.hex
    assign next_o = state_r1 == state_count_s | state_r2 == state_count_s | state_r3 == state_count_s;// | state_r4 == state_count_s;
    // always_comb begin
    //     //arrow 1
    //     case(state_r1)
    //         state_judge_s : arrow1_curr_y_l = arrow1_l;
    //     default : arrow1_curr_y_l = 480;
    //     endcase

    //     //arrow 2
    //     case(state_r2)
    //         state_judge_s : arrow2_curr_y_l = arrow2_l;
    //     default : arrow2_curr_y_l = 480;
    //     endcase

    //     //arrow 3
    //     case(state_r3)
    //         state_judge_s : arrow3_curr_y_l = arrow3_l;
    //     default : arrow3_curr_y_l = 480;
    //     endcase

    //     // //arrow 4
    //     // case(state_r4)
    //     //     state_judge_s : arrow4_curr_y_l = arrow4_l;
    //     // default : arrow4_curr_y_l = 480;
    //     // endcase
    // end
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //each arrow needs a separate signal for to detect when it's pressed for judging
    //arrow can only be judged when the y position is 125 or less
    logic [2:0] btn_l;
    always_comb begin
        //arrow 1
        if(arrow1_l <= 125) begin
            btn_l[0] = btn_i;
        end else begin
            btn_l[0] = 1'b0;
        end

        //arrow 2
        if(arrow2_l <= 125) begin
            btn_l[1] = btn_i;
        end else begin
            btn_l[1] = 1'b0;
        end

        //arrow 3
        if(arrow3_l <= 125) begin
            btn_l[2] = btn_i;
        end else begin
            btn_l[2] = 1'b0;
        end

        // //arrow 4
        // if(arrow4_l <= 125) begin
        //     btn_l[3] = btn_i;
        // end else begin
        //     btn_l[3] = 1'b0;
        // end
    end
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //tells when each arrow needs to reset
    //also moves the arrow when the state is state_moves_s
    always_ff @(posedge clk_i) begin
        //arrow 1
        if(arrow1_l <= 0 | arrow1_l >= 485 | state_r1 == state_wait_s) begin
            arrow1_l <= ARROWY_BEGIN;
        end else if (frame_i & state_r1 == state_move_s) begin
            case(count_up_l[0])
                1'b1: arrow1_l <= arrow1_l - ARROW_SPEED;
                default : arrow1_l <= ARROWY_BEGIN;
            endcase
        end

        //arrow 2
        if(arrow2_l <= 0 | arrow2_l >= 485 | state_r2 == state_wait_s) begin
            arrow2_l <= ARROWY_BEGIN;
        end else if (frame_i & state_r2 == state_move_s) begin
            case(count_up_l[1])
                1'b1: arrow2_l <= arrow2_l - ARROW_SPEED;
                default : arrow2_l <= arrow2_l;
            endcase
        end

        //arrow 3
        if(arrow3_l <= 0 | arrow3_l >= 485 | state_r3 == state_wait_s) begin
            arrow3_l <= ARROWY_BEGIN;
        end else if (frame_i & state_r3 == state_move_s) begin
            case(count_up_l[2])
                1'b1: arrow3_l <= arrow3_l - ARROW_SPEED;
                default : arrow3_l <= arrow3_l;
            endcase
        end

        // //arrow 4
        // if(arrow4_l <= 0 | arrow4_l >= 485 | state_r4 == state_wait_s) begin
        //     arrow4_l <= ARROWY_BEGIN;
        // end else if (frame_i & state_r4 == state_move_s) begin
        //     case(count_up_l[3])
        //         1'b1: arrow4_l <= arrow4_l - ARROW_SPEED;
        //         default : arrow4_l <= arrow4_l;
        //     endcase
        // end
    end
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //keeps track of when to move the arrow
    logic [2:0] count_up_l = '0;
    always_comb begin
        count_up_l[0] = (state_r1 == state_move_s) ? 1'b1 : 1'b0;
        count_up_l[1] = (state_r2 == state_move_s) ? 1'b1 : 1'b0;
        count_up_l[2] = (state_r3 == state_move_s) ? 1'b1 : 1'b0;
        // count_up_l[3] = (state_r4 == state_move_s) ? 1'b1 : 1'b0;
    end

    //counter only counts up
    //also keep track of which arrow is next to be launched
    //moves the state machine to state_move_s
    logic [1:0] arrow_counter_l;
    counter_up
        #(.WIDTH_P(2)
         ,.RESET_VAL(0))
    counter_up_inst
    (.clk_i(clk_i)
    ,.reset_i(1'b0)
    ,.up_i(launch_i)
    ,.count_o(arrow_counter_l)
    );
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //this part determines the timing range/windows for each section
    // logic [CORDW-1:0] arrow1_curr_y_l, arrow2_curr_y_l, arrow3_curr_y_l;//, arrow4_curr_y_l;

    // logic [0:0] marvelous_l = (arrow1_curr_y_l >= 46 & arrow1_curr_y_l <= 60) |
    //                           (arrow2_curr_y_l >= 46 & arrow2_curr_y_l <= 60) |
    //                           (arrow3_curr_y_l >= 46 & arrow3_curr_y_l <= 60);// |
    //                           //(arrow4_curr_y_l >= 46 & arrow4_curr_y_l <= 60);

    // logic [0:0] perfect_l   = (arrow1_curr_y_l >= 61 & arrow1_curr_y_l <= 70) | (arrow1_curr_y_l >= 36 & arrow1_curr_y_l <= 45) |
    //                           (arrow2_curr_y_l >= 61 & arrow2_curr_y_l <= 70) | (arrow2_curr_y_l >= 36 & arrow2_curr_y_l <= 45) |
    //                           (arrow3_curr_y_l >= 61 & arrow3_curr_y_l <= 70) | (arrow3_curr_y_l >= 36 & arrow3_curr_y_l <= 45);// |
    //                           //(arrow4_curr_y_l >= 61 & arrow4_curr_y_l <= 70) | (arrow4_curr_y_l >= 36 & arrow4_curr_y_l <= 45);

    // logic [0:0] great_l     = (arrow1_curr_y_l >= 71 & arrow1_curr_y_l <= 90) | (arrow1_curr_y_l >= 16 & arrow1_curr_y_l <= 35) |
    //                           (arrow2_curr_y_l >= 71 & arrow2_curr_y_l <= 90) | (arrow2_curr_y_l >= 16 & arrow2_curr_y_l <= 35) |
    //                           (arrow3_curr_y_l >= 71 & arrow3_curr_y_l <= 90) | (arrow3_curr_y_l >= 16 & arrow3_curr_y_l <= 35);// |
    //                           //(arrow4_curr_y_l >= 71 & arrow4_curr_y_l <= 90) | (arrow4_curr_y_l >= 16 & arrow4_curr_y_l <= 35);

    // logic [0:0] good_l      = (arrow1_curr_y_l >= 91 & arrow1_curr_y_l <= 105) | (arrow1_curr_y_l >= 1 & arrow1_curr_y_l <= 15) |
    //                           (arrow2_curr_y_l >= 91 & arrow2_curr_y_l <= 105) | (arrow2_curr_y_l >= 1 & arrow2_curr_y_l <= 15) |
    //                           (arrow3_curr_y_l >= 91 & arrow3_curr_y_l <= 105) | (arrow3_curr_y_l >= 1 & arrow3_curr_y_l <= 15);// |
    //                           //(arrow4_curr_y_l >= 91 & arrow4_curr_y_l <= 105) | (arrow4_curr_y_l >= 1 & arrow4_curr_y_l <= 15);

    // assign judge_o = {marvelous_l, perfect_l, great_l, good_l};
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
endmodule
