/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: E9.3

E9.3  : Does stuff
*/

class Circut {
    private:
        int lamp_state = 0;
        int first_switch = 0;
        int second_switch = 0;
    public:

        int get_first_switch_state() {
            return first_switch;
        }

        int get_second_switch_state() {
            return second_switch;
        }

        int get_lamp_state() {
            return lamp_state;
        }

        void toggle_first_switch() {
            if (get_first_switch_state() == 0) {
                first_switch = 1;
            }
            else if(get_first_switch_state() == 1) {
                first_switch = 0;
            }

            if (get_lamp_state() == 1) {
                lamp_state = 0;
            }
            else if (get_lamp_state() == 0) {
                lamp_state = 1;
            }
        }

        void toggle_second_switch() {
            if (get_second_switch_state() == 0) {
                second_switch = 1;
            }
            else if(get_second_switch_state() == 1) {
                second_switch = 0;
            }

            if (get_lamp_state() == 1) {
                lamp_state = 0;
            }
            else if (get_lamp_state() == 0) {
                lamp_state = 1;
            }
        }
};