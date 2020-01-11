/**
 * hand_index-impl.h
 * 
 * @author Kevin Waugh (waugh@cs.cmu.edu)
 * @date April 13, 2013
 */

#ifndef _HAND_INDEX_IMPL_H_
#define _HAND_INDEX_IMPL_H_

/**
 * @brief Hand Indexer TODO What does it do?
 *
 */
struct hand_indexer_s {
  uint8_t cards_per_round[MAX_ROUNDS];        /**< cards added in the round */
  uint_fast32_t round_start[MAX_ROUNDS];
  uint_fast32_t rounds;
  uint_fast32_t configurations[MAX_ROUNDS];  /**< TODO */
  uint_fast32_t permutations[MAX_ROUNDS];
  hand_index_t round_size[MAX_ROUNDS];

  uint_fast32_t *permutation_to_configuration[MAX_ROUNDS],
      *permutation_to_pi[MAX_ROUNDS], *configuration_to_equal[MAX_ROUNDS];
  uint_fast32_t (*configuration[MAX_ROUNDS])[SUITS];
  uint_fast32_t (*configuration_to_suit_size[MAX_ROUNDS])[SUITS];
  hand_index_t* configuration_to_offset[MAX_ROUNDS];
};

struct hand_indexer_state_s {
  uint_fast32_t suit_index[SUITS];
  uint_fast32_t suit_multiplier[SUITS];
  uint_fast32_t round, permutation_index, permutation_multiplier;
  uint32_t used_ranks[SUITS];
};

#endif /* _HAND_INDEX_IMPL_H_ */
