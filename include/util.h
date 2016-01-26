
#ifndef UTIL_H
 
#define UTIL_H


int32_t binarySearch(uint16_t* source, int32_t n, uint16_t target);


int32_t advanceUntil(uint16_t * array, int32_t pos, int32_t length, uint16_t min);


/*
 * Set all bits in indexes [begin,end) to true.
 */
void bitset_set_range(uint64_t *bitmap, uint32_t start, uint32_t end);



/**
 * Given a bitset having cardinality card, set all bit values in the list (there are length of them)
 * and return the updated cardinality. This evidently assumes that the bitset already contained data.
 */
uint64_t bitset_set_list(void *bitset, uint64_t card,
                         uint16_t *list, uint64_t length);

/**
 * Given a bitset having cardinality card, unset all bit values in the list (there are length of them)
 * and return the updated cardinality. This evidently assumes that the bitset already contained data.
 */
uint64_t bitset_clear_list(void *bitset, uint64_t card,
                           uint16_t *list, uint64_t length);

#endif
