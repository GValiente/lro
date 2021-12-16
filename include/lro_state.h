#ifndef LRO_STATE_H
#define LRO_STATE_H

#include "bn_vector.h"

namespace lro
{
    class State
    {
        private :
            int _level = 0;
            bn::vector<int, 500> _academy = bn::vector<int, 500>(500,0);
        public : 
            State();

            [[nodiscard]] int get_last_completed_level(){
                return _level;
            }
            void completeLevel(int level);

            [[nodiscard]] bn::vector<int, 500> get_best_min_moves_list(){
                return _academy;
            }
            void set_best_min_move(int index, int score);
    };
}

#endif
