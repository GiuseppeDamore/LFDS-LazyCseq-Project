typedef int _____STARTSTRIPPINGFROMHERE_____;
typedef int __cs_barrier_t;
typedef int __cs_barrierattr_t;
typedef int __cs_attr_t;
typedef int __cs_cond_t;
typedef int __cs_condattr_t;
typedef int __cs_key_t;
typedef int __cs_mutex_t;
typedef int __cs_mutexattr_t;
typedef int __cs_once_t;
typedef int __cs_rwlock_t;
typedef int __cs_rwlockattr_t;
typedef int __cs_t;
typedef int size_t;
typedef int __builtin_va_list;
typedef int __gnuc_va_list;
typedef int __int8_t;
typedef int __uint8_t;
typedef int __int16_t;
typedef int __uint16_t;
typedef int __int_least16_t;
typedef int __uint_least16_t;
typedef int __int32_t;
typedef int __uint32_t;
typedef int __int64_t;
typedef int __uint64_t;
typedef int __int_least32_t;
typedef int __uint_least32_t;
typedef int __s8;
typedef int __u8;
typedef int __s16;
typedef int __u16;
typedef int __s32;
typedef int __u32;
typedef int __s64;
typedef int __u64;
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
typedef int _off_t;
typedef int __dev_t;
typedef int __uid_t;
typedef int __gid_t;
typedef int _off64_t;
typedef int _fpos_t;
typedef int _ssize_t;
typedef int wint_t;
typedef int _mbstate_t;
typedef int _flock_t;
typedef int _iconv_t;
typedef int __ULong;
typedef int __FILE;
typedef int ptrdiff_t;
typedef int wchar_t;
typedef int __off_t;
typedef int __pid_t;
typedef int __loff_t;
typedef int u_char;
typedef int u_short;
typedef int u_int;
typedef int u_long;
typedef int ushort;
typedef int uint;
typedef int clock_t;
typedef int time_t;
typedef int daddr_t;
typedef int caddr_t;
typedef int ino_t;
typedef int off_t;
typedef int dev_t;
typedef int uid_t;
typedef int gid_t;
typedef int pid_t;
typedef int key_t;
typedef int ssize_t;
typedef int mode_t;
typedef int nlink_t;
typedef int fd_mask;
typedef int _types_fd_set;
typedef int fd_set;
typedef int clockid_t;
typedef int timer_t;
typedef int useconds_t;
typedef int suseconds_t;
typedef int FILE;
typedef int fpos_t;
typedef int cookie_read_function_t;
typedef int cookie_write_function_t;
typedef int cookie_seek_function_t;
typedef int cookie_close_function_t;
typedef int cookie_io_functions_t;
typedef int div_t;
typedef int ldiv_t;
typedef int lldiv_t;
typedef int sigset_t;
typedef int __sigset_t;
typedef int _sig_func_ptr;
typedef int sig_atomic_t;
typedef int __tzrule_type;
typedef int __tzinfo_type;
typedef int mbstate_t;
typedef int sem_t;
typedef int pthread_t;
typedef int pthread_attr_t;
typedef int pthread_mutex_t;
typedef int pthread_mutexattr_t;
typedef int pthread_cond_t;
typedef int pthread_condattr_t;
typedef int pthread_key_t;
typedef int pthread_once_t;
typedef int pthread_rwlock_t;
typedef int pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
typedef int pthread_barrier_t;
typedef int pthread_barrierattr_t;
typedef int jmp_buf;
typedef int rlim_t;
typedef int sa_family_t;
typedef int sigjmp_buf;
typedef int stack_t;
typedef int siginfo_t;
typedef int z_stream;
typedef int int8_t;
typedef int uint8_t;
typedef int int16_t;
typedef int uint16_t;
typedef int int32_t;
typedef int uint32_t;
typedef int int64_t;
typedef int uint64_t;
typedef int int_least8_t;
typedef int uint_least8_t;
typedef int int_least16_t;
typedef int uint_least16_t;
typedef int int_least32_t;
typedef int uint_least32_t;
typedef int int_least64_t;
typedef int uint_least64_t;
typedef int int_fast8_t;
typedef int uint_fast8_t;
typedef int int_fast16_t;
typedef int uint_fast16_t;
typedef int int_fast32_t;
typedef int uint_fast32_t;
typedef int int_fast64_t;
typedef int uint_fast64_t;
typedef int intptr_t;
typedef int uintptr_t;
typedef int intmax_t;
typedef int uintmax_t;
typedef _Bool bool;
typedef void BZFILE;
typedef int va_list;
typedef int loff_t;
typedef int _____STOPSTRIPPINGFROMHERE_____;
#pragma warning( push )
#pragma warning( disable : 4324 )
#pragma prefast( disable : 28113 28182 28183, "blah" )
typedef int long long lfds711_pal_int_t;
typedef int long long unsigned lfds711_pal_uint_t;
struct lfds711_prng_state
{
lfds711_pal_uint_t entropy;
};
struct lfds711_prng_st_state
{
lfds711_pal_uint_t entropy;
};
void lfds711_prng_init_valid_on_current_logical_core(struct lfds711_prng_state *ps, lfds711_pal_uint_t seed);
void lfds711_prng_st_init(struct lfds711_prng_st_state *psts, lfds711_pal_uint_t seed);
enum lfds711_misc_cas_strength {LFDS711_MISC_CAS_STRENGTH_STRONG = 
0, LFDS711_MISC_CAS_STRENGTH_WEAK = 
1};
enum lfds711_misc_validity {LFDS711_MISC_VALIDITY_UNKNOWN, LFDS711_MISC_VALIDITY_VALID, LFDS711_MISC_VALIDITY_INVALID_LOOP, LFDS711_MISC_VALIDITY_INVALID_MISSING_ELEMENTS, LFDS711_MISC_VALIDITY_INVALID_ADDITIONAL_ELEMENTS, LFDS711_MISC_VALIDITY_INVALID_TEST_DATA, LFDS711_MISC_VALIDITY_INVALID_ORDER, LFDS711_MISC_VALIDITY_INVALID_ATOMIC_FAILED, LFDS711_MISC_VALIDITY_INDETERMINATE_NONATOMIC_PASSED};
enum lfds711_misc_flag {LFDS711_MISC_FLAG_LOWERED, LFDS711_MISC_FLAG_RAISED};
enum lfds711_misc_query {LFDS711_MISC_QUERY_GET_BUILD_AND_VERSION_STRING};
enum lfds711_misc_data_structure {LFDS711_MISC_DATA_STRUCTURE_BTREE_AU, LFDS711_MISC_DATA_STRUCTURE_FREELIST, LFDS711_MISC_DATA_STRUCTURE_HASH_A, LFDS711_MISC_DATA_STRUCTURE_LIST_AOS, LFDS711_MISC_DATA_STRUCTURE_LIST_ASU, LFDS711_MISC_DATA_STRUCTURE_QUEUE_BMM, LFDS711_MISC_DATA_STRUCTURE_QUEUE_BSS, LFDS711_MISC_DATA_STRUCTURE_QUEUE_UMM, LFDS711_MISC_DATA_STRUCTURE_RINGBUFFER, LFDS711_MISC_DATA_STRUCTURE_STACK, LFDS711_MISC_DATA_STRUCTURE_COUNT};
struct lfds711_misc_backoff_state
{
lfds711_pal_uint_t lock;
lfds711_pal_uint_t backoff_iteration_frequency_counters[2];
lfds711_pal_uint_t metric;
lfds711_pal_uint_t total_operations;
};
struct lfds711_misc_globals
{
struct lfds711_prng_state ps;
};
struct lfds711_misc_validation_info
{
lfds711_pal_uint_t min_elements;
lfds711_pal_uint_t max_elements;
};
struct lfds711_misc_globals lfds711_misc_globals;
static void lfds711_misc_force_store(void);
void lfds711_misc_query(enum lfds711_misc_query query_type, void *query_input, void *query_output);
#pragma prefast( disable : 28112, "blah" )
void lfds711_misc_force_store()
{
lfds711_pal_uint_t destination;
        {
(void) __atomic_exchange_n(&destination, 0, 0);
        }
;
return;
}
enum lfds711_btree_au_absolute_position {LFDS711_BTREE_AU_ABSOLUTE_POSITION_ROOT, LFDS711_BTREE_AU_ABSOLUTE_POSITION_SMALLEST_IN_TREE, LFDS711_BTREE_AU_ABSOLUTE_POSITION_LARGEST_IN_TREE};
enum lfds711_btree_au_existing_key {LFDS711_BTREE_AU_EXISTING_KEY_OVERWRITE, LFDS711_BTREE_AU_EXISTING_KEY_FAIL};
enum lfds711_btree_au_insert_result {LFDS711_BTREE_AU_INSERT_RESULT_FAILURE_EXISTING_KEY, LFDS711_BTREE_AU_INSERT_RESULT_SUCCESS_OVERWRITE, LFDS711_BTREE_AU_INSERT_RESULT_SUCCESS};
enum lfds711_btree_au_query {LFDS711_BTREE_AU_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_BTREE_AU_QUERY_SINGLETHREADED_VALIDATE};
enum lfds711_btree_au_relative_position {LFDS711_BTREE_AU_RELATIVE_POSITION_UP, LFDS711_BTREE_AU_RELATIVE_POSITION_LEFT, LFDS711_BTREE_AU_RELATIVE_POSITION_RIGHT, LFDS711_BTREE_AU_RELATIVE_POSITION_SMALLEST_ELEMENT_BELOW_CURRENT_ELEMENT, LFDS711_BTREE_AU_RELATIVE_POSITION_LARGEST_ELEMENT_BELOW_CURRENT_ELEMENT, LFDS711_BTREE_AU_RELATIVE_POSITION_NEXT_SMALLER_ELEMENT_IN_ENTIRE_TREE, LFDS711_BTREE_AU_RELATIVE_POSITION_NEXT_LARGER_ELEMENT_IN_ENTIRE_TREE};
struct lfds711_btree_au_element
{
struct lfds711_btree_au_element * volatile left;
struct lfds711_btree_au_element * volatile right;
struct lfds711_btree_au_element * volatile up;
void * volatile value;
void *key;
};
struct lfds711_btree_au_state
{
struct lfds711_btree_au_element * volatile root;
int (*key_compare_function)(const void *new_key, const void *existing_key);
enum lfds711_btree_au_existing_key existing_key;
void *user_state;
struct lfds711_misc_backoff_state insert_backoff;
};
void lfds711_btree_au_init_valid_on_current_logical_core(struct lfds711_btree_au_state *baus, 
int (*key_compare_function)(const void *new_key, const void *existing_key), 
enum lfds711_btree_au_existing_key existing_key, 
void *user_state);
void lfds711_btree_au_cleanup(struct lfds711_btree_au_state *baus, 
void (*element_cleanup_callback)(struct lfds711_btree_au_state *baus, struct lfds711_btree_au_element *baue));
enum lfds711_btree_au_insert_result lfds711_btree_au_insert(struct lfds711_btree_au_state *baus, 
struct lfds711_btree_au_element *baue, 
struct lfds711_btree_au_element **existing_baue);
int lfds711_btree_au_get_by_key(struct lfds711_btree_au_state *baus, 
int (*key_compare_function)(const void *new_key, const void *existing_key), 
void *key, 
struct lfds711_btree_au_element **baue);
int lfds711_btree_au_get_by_absolute_position_and_then_by_relative_position(struct lfds711_btree_au_state *baus, 
struct lfds711_btree_au_element **baue, 
enum lfds711_btree_au_absolute_position absolute_position, 
enum lfds711_btree_au_relative_position relative_position);
int lfds711_btree_au_get_by_absolute_position(struct lfds711_btree_au_state *baus, 
struct lfds711_btree_au_element **baue, 
enum lfds711_btree_au_absolute_position absolute_position);
int lfds711_btree_au_get_by_relative_position(struct lfds711_btree_au_element **baue, 
enum lfds711_btree_au_relative_position relative_position);
void lfds711_btree_au_query(struct lfds711_btree_au_state *baus, 
enum lfds711_btree_au_query query_type, 
void *query_input, 
void *query_output);
enum lfds711_freelist_query {LFDS711_FREELIST_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_FREELIST_QUERY_SINGLETHREADED_VALIDATE, LFDS711_FREELIST_QUERY_GET_ELIMINATION_ARRAY_EXTRA_ELEMENTS_IN_FREELIST_ELEMENTS};
struct lfds711_freelist_element
{
struct lfds711_freelist_element *next;
void *key;
void *value;
};
struct lfds711_freelist_state
{
struct lfds711_freelist_element * volatile top[2];
lfds711_pal_uint_t elimination_array_size_in_elements;
struct lfds711_freelist_element * volatile (*elimination_array)[128 / (sizeof(struct lfds711_freelist_element *))];
void *user_state;
struct lfds711_misc_backoff_state pop_backoff;
struct lfds711_misc_backoff_state push_backoff;
};
void lfds711_freelist_init_valid_on_current_logical_core(struct lfds711_freelist_state *fs, 
struct lfds711_freelist_element * volatile (*elimination_array)[128 / (sizeof(struct lfds711_freelist_element *))], 
lfds711_pal_uint_t elimination_array_size_in_elements, 
void *user_state);
void lfds711_freelist_cleanup(struct lfds711_freelist_state *fs, 
void (*element_cleanup_callback)(struct lfds711_freelist_state *fs, struct lfds711_freelist_element *fe));
void lfds711_freelist_push(struct lfds711_freelist_state *fs, 
struct lfds711_freelist_element *fe, 
struct lfds711_prng_st_state *psts);
int lfds711_freelist_pop(struct lfds711_freelist_state *fs, 
struct lfds711_freelist_element **fe, 
struct lfds711_prng_st_state *psts);
void lfds711_freelist_query(struct lfds711_freelist_state *fs, 
enum lfds711_freelist_query query_type, 
void *query_input, 
void *query_output);
enum lfds711_hash_a_existing_key {LFDS711_HASH_A_EXISTING_KEY_OVERWRITE, LFDS711_HASH_A_EXISTING_KEY_FAIL};
enum lfds711_hash_a_insert_result {LFDS711_HASH_A_PUT_RESULT_FAILURE_EXISTING_KEY, LFDS711_HASH_A_PUT_RESULT_SUCCESS_OVERWRITE, LFDS711_HASH_A_PUT_RESULT_SUCCESS};
enum lfds711_hash_a_query {LFDS711_HASH_A_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_HASH_A_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_hash_a_element
{
struct lfds711_btree_au_element baue;
void *key;
void * volatile value;
};
struct lfds711_hash_a_iterate
{
struct lfds711_btree_au_element *baue;
struct lfds711_btree_au_state *baus;
struct lfds711_btree_au_state *baus_end;
};
struct lfds711_hash_a_state
{
enum lfds711_hash_a_existing_key existing_key;
int (*key_compare_function)(const void *new_key, const void *existing_key);
lfds711_pal_uint_t array_size;
struct lfds711_btree_au_state *baus_array;
void (*element_cleanup_callback)(struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae);
void (*key_hash_function)(const void *key, lfds711_pal_uint_t *hash);
void *user_state;
};
void lfds711_hash_a_init_valid_on_current_logical_core(struct lfds711_hash_a_state *has, 
struct lfds711_btree_au_state *baus_array, 
lfds711_pal_uint_t array_size, 
int (*key_compare_function)(const void *new_key, const void *existing_key), 
void (*key_hash_function)(const void *key, lfds711_pal_uint_t *hash), 
enum lfds711_hash_a_existing_key existing_key, 
void *user_state);
void lfds711_hash_a_cleanup(struct lfds711_hash_a_state *has, 
void (*element_cleanup_function)(struct lfds711_hash_a_state *has, struct lfds711_hash_a_element *hae));
enum lfds711_hash_a_insert_result lfds711_hash_a_insert(struct lfds711_hash_a_state *has, 
struct lfds711_hash_a_element *hae, 
struct lfds711_hash_a_element **existing_hae);
int lfds711_hash_a_get_by_key(struct lfds711_hash_a_state *has, 
int (*key_compare_function)(const void *new_key, const void *existing_key), 
void (*key_hash_function)(const void *key, lfds711_pal_uint_t *hash), 
void *key, 
struct lfds711_hash_a_element **hae);
void lfds711_hash_a_iterate_init(struct lfds711_hash_a_state *has, struct lfds711_hash_a_iterate *hai);
int lfds711_hash_a_iterate(struct lfds711_hash_a_iterate *hai, struct lfds711_hash_a_element **hae);
void lfds711_hash_a_query(struct lfds711_hash_a_state *has, 
enum lfds711_hash_a_query query_type, 
void *query_input, 
void *query_output);
enum lfds711_list_aso_existing_key {LFDS711_LIST_ASO_EXISTING_KEY_OVERWRITE, LFDS711_LIST_ASO_EXISTING_KEY_FAIL};
enum lfds711_list_aso_insert_result {LFDS711_LIST_ASO_INSERT_RESULT_FAILURE_EXISTING_KEY, LFDS711_LIST_ASO_INSERT_RESULT_SUCCESS_OVERWRITE, LFDS711_LIST_ASO_INSERT_RESULT_SUCCESS};
enum lfds711_list_aso_query {LFDS711_LIST_ASO_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_LIST_ASO_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_list_aso_element
{
struct lfds711_list_aso_element * volatile next;
void * volatile value;
void *key;
};
struct lfds711_list_aso_state
{
struct lfds711_list_aso_element dummy_element;
struct lfds711_list_aso_element *start;
int (*key_compare_function)(const void *new_key, const void *existing_key);
enum lfds711_list_aso_existing_key existing_key;
void *user_state;
struct lfds711_misc_backoff_state insert_backoff;
};
void lfds711_list_aso_init_valid_on_current_logical_core(struct lfds711_list_aso_state *lasos, 
int (*key_compare_function)(const void *new_key, const void *existing_key), 
enum lfds711_list_aso_existing_key existing_key, 
void *user_state);
void lfds711_list_aso_cleanup(struct lfds711_list_aso_state *lasos, 
void (*element_cleanup_callback)(struct lfds711_list_aso_state *lasos, struct lfds711_list_aso_element *lasoe));
enum lfds711_list_aso_insert_result lfds711_list_aso_insert(struct lfds711_list_aso_state *lasos, 
struct lfds711_list_aso_element *lasoe, 
struct lfds711_list_aso_element **existing_lasoe);
int lfds711_list_aso_get_by_key(struct lfds711_list_aso_state *lasos, 
void *key, 
struct lfds711_list_aso_element **lasoe);
void lfds711_list_aso_query(struct lfds711_list_aso_state *lasos, 
enum lfds711_list_aso_query query_type, 
void *query_input, 
void *query_output);
enum lfds711_list_asu_position {LFDS711_LIST_ASU_POSITION_START, LFDS711_LIST_ASU_POSITION_END, LFDS711_LIST_ASU_POSITION_AFTER};
enum lfds711_list_asu_query {LFDS711_LIST_ASU_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_LIST_ASU_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_list_asu_element
{
struct lfds711_list_asu_element * volatile next;
void * volatile value;
void *key;
};
struct lfds711_list_asu_state
{
struct lfds711_list_asu_element dummy_element;
struct lfds711_list_asu_element * volatile end;
struct lfds711_list_asu_element *start;
void *user_state;
struct lfds711_misc_backoff_state after_backoff;
struct lfds711_misc_backoff_state end_backoff;
struct lfds711_misc_backoff_state start_backoff;
};
void lfds711_list_asu_init_valid_on_current_logical_core(struct lfds711_list_asu_state *lasus, 
void *user_state);
void lfds711_list_asu_cleanup(struct lfds711_list_asu_state *lasus, 
void (*element_cleanup_callback)(struct lfds711_list_asu_state *lasus, struct lfds711_list_asu_element *lasue));
void lfds711_list_asu_insert_at_position(struct lfds711_list_asu_state *lasus, 
struct lfds711_list_asu_element *lasue, 
struct lfds711_list_asu_element *lasue_predecessor, 
enum lfds711_list_asu_position position);
void lfds711_list_asu_insert_at_start(struct lfds711_list_asu_state *lasus, 
struct lfds711_list_asu_element *lasue);
void lfds711_list_asu_insert_at_end(struct lfds711_list_asu_state *lasus, 
struct lfds711_list_asu_element *lasue);
void lfds711_list_asu_insert_after_element(struct lfds711_list_asu_state *lasus, 
struct lfds711_list_asu_element *lasue, 
struct lfds711_list_asu_element *lasue_predecessor);
int lfds711_list_asu_get_by_key(struct lfds711_list_asu_state *lasus, 
int (*key_compare_function)(const void *new_key, const void *existing_key), 
void *key, 
struct lfds711_list_asu_element **lasue);
void lfds711_list_asu_query(struct lfds711_list_asu_state *lasus, 
enum lfds711_list_asu_query query_type, 
void *query_input, 
void *query_output);
enum lfds711_queue_bmm_query {LFDS711_QUEUE_BMM_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_QUEUE_BMM_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_queue_bmm_element
{
lfds711_pal_uint_t sequence_number;
void * volatile key;
void * volatile value;
};
struct lfds711_queue_bmm_state
{
lfds711_pal_uint_t number_elements;
lfds711_pal_uint_t mask;
lfds711_pal_uint_t read_index;
lfds711_pal_uint_t write_index;
struct lfds711_queue_bmm_element *element_array;
void *user_state;
struct lfds711_misc_backoff_state dequeue_backoff;
struct lfds711_misc_backoff_state enqueue_backoff;
};
void lfds711_queue_bmm_init_valid_on_current_logical_core(struct lfds711_queue_bmm_state *qbmms, 
struct lfds711_queue_bmm_element *element_array, 
lfds711_pal_uint_t number_elements, 
void *user_state);
void lfds711_queue_bmm_cleanup(struct lfds711_queue_bmm_state *qbmms, 
void (*element_cleanup_callback)(struct lfds711_queue_bmm_state *qbmms, 
void *key, 
void *value));
int lfds711_queue_bmm_enqueue(struct lfds711_queue_bmm_state *qbmms, 
void *key, 
void *value);
int lfds711_queue_bmm_dequeue(struct lfds711_queue_bmm_state *qbmms, 
void **key, 
void **value);
void lfds711_queue_bmm_query(struct lfds711_queue_bmm_state *qbmms, 
enum lfds711_queue_bmm_query query_type, 
void *query_input, 
void *query_output);
enum lfds711_queue_bss_query {LFDS711_QUEUE_BSS_QUERY_GET_POTENTIALLY_INACCURATE_COUNT, LFDS711_QUEUE_BSS_QUERY_VALIDATE};
struct lfds711_queue_bss_element
{
void * volatile key;
void * volatile value;
};
struct lfds711_queue_bss_state
{
lfds711_pal_uint_t number_elements;
lfds711_pal_uint_t mask;
lfds711_pal_uint_t read_index;
lfds711_pal_uint_t write_index;
struct lfds711_queue_bss_element *element_array;
void *user_state;
};
void lfds711_queue_bss_init_valid_on_current_logical_core(struct lfds711_queue_bss_state *qbsss, 
struct lfds711_queue_bss_element *element_array, 
lfds711_pal_uint_t number_elements, 
void *user_state);
void lfds711_queue_bss_cleanup(struct lfds711_queue_bss_state *qbsss, 
void (*element_cleanup_callback)(struct lfds711_queue_bss_state *qbsss, void *key, void *value));
int lfds711_queue_bss_enqueue(struct lfds711_queue_bss_state *qbsss, 
void *key, 
void *value);
int lfds711_queue_bss_dequeue(struct lfds711_queue_bss_state *qbsss, 
void **key, 
void **value);
void lfds711_queue_bss_query(struct lfds711_queue_bss_state *qbsss, 
enum lfds711_queue_bss_query query_type, 
void *query_input, 
void *query_output);
enum lfds711_queue_umm_query {LFDS711_QUEUE_UMM_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_QUEUE_UMM_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_queue_umm_element
{
struct lfds711_queue_umm_element * volatile next[2];
void *key;
void *value;
};
struct lfds711_queue_umm_state
{
struct lfds711_queue_umm_element * volatile enqueue[2];
struct lfds711_queue_umm_element * volatile dequeue[2];
lfds711_pal_uint_t aba_counter;
void *user_state;
struct lfds711_misc_backoff_state dequeue_backoff;
struct lfds711_misc_backoff_state enqueue_backoff;
};
void lfds711_queue_umm_init_valid_on_current_logical_core(struct lfds711_queue_umm_state *qumms, 
struct lfds711_queue_umm_element *qumme_dummy, 
void *user_state);
void lfds711_queue_umm_cleanup(struct lfds711_queue_umm_state *qumms, 
void (*element_cleanup_callback)(struct lfds711_queue_umm_state *qumms, struct lfds711_queue_umm_element *qumme, enum lfds711_misc_flag dummy_element_flag));
void lfds711_queue_umm_enqueue(struct lfds711_queue_umm_state *qumms, 
struct lfds711_queue_umm_element *qumme);
int lfds711_queue_umm_dequeue(struct lfds711_queue_umm_state *qumms, 
struct lfds711_queue_umm_element **qumme);
void lfds711_queue_umm_query(struct lfds711_queue_umm_state *qumms, 
enum lfds711_queue_umm_query query_type, 
void *query_input, 
void *query_output);
enum lfds711_ringbuffer_query {LFDS711_RINGBUFFER_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_RINGBUFFER_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_ringbuffer_element
{
struct lfds711_freelist_element fe;
struct lfds711_queue_umm_element qumme;
struct lfds711_queue_umm_element *qumme_use;
void *key;
void *value;
};
struct lfds711_ringbuffer_state
{
struct lfds711_freelist_state fs;
struct lfds711_queue_umm_state qumms;
void (*element_cleanup_callback)(struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag);
void *user_state;
};
void lfds711_ringbuffer_init_valid_on_current_logical_core(struct lfds711_ringbuffer_state *rs, 
struct lfds711_ringbuffer_element *re_array_inc_dummy, 
lfds711_pal_uint_t number_elements_inc_dummy, 
void *user_state);
void lfds711_ringbuffer_cleanup(struct lfds711_ringbuffer_state *rs, 
void (*element_cleanup_callback)(struct lfds711_ringbuffer_state *rs, void *key, void *value, enum lfds711_misc_flag unread_flag));
int lfds711_ringbuffer_read(struct lfds711_ringbuffer_state *rs, 
void **key, 
void **value);
void lfds711_ringbuffer_write(struct lfds711_ringbuffer_state *rs, 
void *key, 
void *value, 
enum lfds711_misc_flag *overwrite_occurred_flag, 
void **overwritten_key, 
void **overwritten_value);
void lfds711_ringbuffer_query(struct lfds711_ringbuffer_state *rs, 
enum lfds711_ringbuffer_query query_type, 
void *query_input, 
void *query_output);
enum lfds711_stack_query {LFDS711_STACK_QUERY_SINGLETHREADED_GET_COUNT, LFDS711_STACK_QUERY_SINGLETHREADED_VALIDATE};
struct lfds711_stack_element
{
struct lfds711_stack_element *next;
void *key;
void *value;
};
struct lfds711_stack_state
{
struct lfds711_stack_element * volatile top[2];
void *user_state;
struct lfds711_misc_backoff_state pop_backoff;
struct lfds711_misc_backoff_state push_backoff;
};
void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *ss, 
void *user_state);
void lfds711_stack_cleanup(struct lfds711_stack_state *ss, 
void (*element_cleanup_callback)(struct lfds711_stack_state *ss, struct lfds711_stack_element *se));
void lfds711_stack_push(struct lfds711_stack_state *ss, 
struct lfds711_stack_element *se);
int lfds711_stack_pop(struct lfds711_stack_state *ss, 
struct lfds711_stack_element **se);
void lfds711_stack_query(struct lfds711_stack_state *ss, 
enum lfds711_stack_query query_type, 
void *query_input, 
void *query_output);
#pragma warning( pop )
void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *bs);
__cs_mutex_t lock;
_Bool __atomic_compare_exchange_n(int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
int res;
res = __CSEQ_atomic_compare_and_exchange(mptr, eptr, newval, weak_p, sm, fm);
return res;
}
_Bool __CSEQ_atomic_compare_and_exchange(int long long unsigned *mptr, int long long unsigned *eptr, int long long unsigned newval, _Bool weak_p, int sm, int fm)
{
if ((*mptr) == (*eptr))
        {
*mptr = newval;
return 1;
        }
        else
        {
*eptr = newval;
return 0;
        }
}
unsigned long __atomic_exchange_n(int long long unsigned *previous, int long long unsigned new, int memorder)
{
int res;
res = __CSEQ_atomic_exchange(previous, new, memorder);
return res;
}
unsigned long __CSEQ_atomic_exchange(int long long unsigned *previous, int long long unsigned new, int memorder)
{
unsigned long int old;
old = *previous;
*previous = new;
return old;
}
void __atomic_thread_fence(int i)
{
}
int __CSEQ_atomic_swap_stack_top(struct lfds711_stack_element * volatile *top, struct lfds711_stack_element * volatile *oldtop, 
struct lfds711_stack_element **newtop)
{
if ((*oldtop) == (*top))
        {
*top = *newtop;
return 1;
        }
        else
        {
*oldtop = *top;
return 0;
        }
}
void exponential_backoff()
{
int loop;
for (loop = 0; loop < 10; loop++)
        {
;
        }
}
void lfds711_misc_internal_backoff_init(struct lfds711_misc_backoff_state *bs)
{
if (!(bs != 0))
        {
char *c;
c = 0;
*c = 0;
        }
;
;
if (!((((lfds711_pal_uint_t) (&(*bs).lock)) % 128) == 0))
        {
char *c;
c = 0;
*c = 0;
        }
;
;
(*bs).lock = LFDS711_MISC_FLAG_LOWERED;
(*bs).backoff_iteration_frequency_counters[0] = 0;
(*bs).backoff_iteration_frequency_counters[1] = 0;
(*bs).metric = 1;
(*bs).total_operations = 0;
return;
}
void lfds711_stack_init_valid_on_current_logical_core(struct lfds711_stack_state *ss, 
void *user_state)
{
__cs_mutex_init(&lock, 0);
if (!(ss != 0))
        {
char *c;
c = 0;
*c = 0;
        }
;
;
if (!((((lfds711_pal_uint_t) (*ss).top) % 128) == 0))
        {
char *c;
c = 0;
*c = 0;
        }
;
;
if (!((((lfds711_pal_uint_t) (&(*ss).user_state)) % 128) == 0))
        {
char *c;
c = 0;
*c = 0;
        }
;
;
__cs_mutex_lock(&lock);
(*ss).top[0] = 0;
(*ss).top[1] = 0;
(*ss).user_state = user_state;
lfds711_misc_internal_backoff_init(&(*ss).pop_backoff);
lfds711_misc_internal_backoff_init(&(*ss).push_backoff);
lfds711_misc_force_store();
__cs_mutex_unlock(&lock);
return;
}
int lfds711_stack_pop(struct lfds711_stack_state *ss, 
struct lfds711_stack_element **se)
{
char unsigned result;
lfds711_pal_uint_t backoff_iteration;
backoff_iteration = 0;
struct lfds711_stack_element *new_top[2];
struct lfds711_stack_element * volatile original_top[2];
if (!(ss != 0))
        {
char *c;
c = 0;
*c = 0;
        }
;
;
if (!(se != 0))
        {
char *c;
c = 0;
*c = 0;
        }
;
;
__cs_mutex_lock(&lock);
__cs_mutex_unlock(&lock);
original_top[1] = (*ss).top[1];
original_top[0] = (*ss).top[0];
int i;
i = 0;
do
        {
if (original_top[0] == 0)
                {
*se = 0;
return 0;
                }
new_top[1] = original_top[1] + 1;
new_top[0] = (*original_top[0]).next;
__cs_mutex_lock(&lock);
result = __CSEQ_atomic_swap_stack_top(&(*ss).top[0], &original_top[0], &new_top[0]);
__cs_mutex_unlock(&lock);
if (result == 0)
                {
exponential_backoff();
__cs_mutex_lock(&lock);
__cs_mutex_unlock(&lock);
                }
i++;
if (i > 1000)
                {
break;
                }
        }
        while (
result == 0);
*se = original_top[0];
return 1;
}
void lfds711_stack_push(struct lfds711_stack_state *ss, 
struct lfds711_stack_element *se)
{
char unsigned result;
lfds711_pal_uint_t backoff_iteration;
backoff_iteration = 0;
struct lfds711_stack_element *new_top[2];
struct lfds711_stack_element * volatile original_top[2];
if (!(ss != 0))
        {
char *c;
c = 0;
*c = 0;
        }
;
;
if (!(se != 0))
        {
char *c;
c = 0;
*c = 0;
        }
;
;
new_top[0] = se;
original_top[1] = (*ss).top[1];
original_top[0] = (*ss).top[0];
result = 0;
int i;
i = 0;
while (result == 0)
        {
__cs_mutex_lock(&lock);
(*se).next = original_top[0];
__cs_mutex_unlock(&lock);
new_top[1] = original_top[1] + 1;
__cs_mutex_lock(&lock);
result = __CSEQ_atomic_swap_stack_top(&(*ss).top[0], &original_top[0], &new_top[0]);
__cs_mutex_unlock(&lock);
if (result == 0)
                {
exponential_backoff();
                }
i++;
if (i > 1000)
                {
break;
                }
        }
return;
}
void lfds711_stack_cleanup(struct lfds711_stack_state *ss, 
void (*element_cleanup_callback)(struct lfds711_stack_state *ss, struct lfds711_stack_element *se))
{
struct lfds711_stack_element *se;
struct lfds711_stack_element *se_temp;
if (!(ss != 0))
        {
char *c;
c = 0;
*c = 0;
        }
;
;
__atomic_thread_fence(2);
if (element_cleanup_callback != 0)
        {
se = (*ss).top[0];
while (se != 0)
                {
se_temp = se;
se = (*se).next;
element_cleanup_callback(ss, se_temp);
                }
        }
return;
}
typedef struct NODE_PAYLOAD_S
{
struct lfds711_stack_element se;
int long long unsigned user_id;
} NODE_PAYLOAD_T;
typedef struct LIST_NODE_S
{
struct LIST_NODE_S *next;
NODE_PAYLOAD_T payload;
} LIST_NODE_T;
int LIST_InsertHeadNode(LIST_NODE_T **IO_head, struct lfds711_stack_element I__se, int long long unsigned I__user_id)
{
int rCode;
rCode = 0;
LIST_NODE_T *newNode;
newNode = 0;
newNode = __cs_safe_malloc(sizeof(*newNode));
if (0 == newNode)
        {
rCode = 12;
fprintf(stderr, "malloc() failed.\n");
goto CLEANUP;
        }
(*newNode).payload.se = I__se;
(*newNode).payload.user_id = I__user_id;
(*newNode).next = *IO_head;
*IO_head = newNode;
CLEANUP:
return rCode;
}
int PrintListPayloads(LIST_NODE_T *head)
{
int rCode;
rCode = 0;
LIST_NODE_T *cur;
cur = head;
while (cur)
        {
printf("%lld", (*cur).payload.user_id);
cur = (*cur).next;
if (cur != 0)
                {
printf(",");
                }
        }
printf("\n");
return rCode;
}
int GetListSize(LIST_NODE_T *head)
{
LIST_NODE_T *cur;
cur = head;
int nodeCnt;
nodeCnt = 0;
while (cur)
        {
++nodeCnt;
cur = (*cur).next;
        }
return nodeCnt;
}
int LIST_GetTailNode(LIST_NODE_T *I__listHead, LIST_NODE_T **_O_listTail)
{
int rCode;
rCode = 0;
LIST_NODE_T *curNode;
curNode = I__listHead;
if (curNode)
        {
while ((*curNode).next)
                {
curNode = (*curNode).next;
                }
        }
if (_O_listTail)
        {
*_O_listTail = curNode;
        }
return rCode;
}
int LIST_InsertTailNode(LIST_NODE_T **IO_head, struct lfds711_stack_element I__se, int long long unsigned I__user_id)
{
int rCode;
rCode = 0;
LIST_NODE_T *tailNode;
LIST_NODE_T *newNode;
newNode = 0;
rCode = LIST_GetTailNode(*IO_head, &tailNode);
if (rCode)
        {
fprintf(stderr, "LIST_GetTailNode() reports: %d\n", rCode);
goto CLEANUP;
        }
newNode = __cs_safe_malloc(sizeof(*newNode));
if (0 == newNode)
        {
rCode = 12;
fprintf(stderr, "malloc() failed.\n");
goto CLEANUP;
        }
(*newNode).payload.user_id = I__user_id;
(*newNode).payload.se = I__se;
(*newNode).next = 0;
if (tailNode)
        {
(*tailNode).next = newNode;
        }
        else
        {
*IO_head = newNode;
        }
CLEANUP:
return rCode;
}
int LIST_FetchParentNodeById(LIST_NODE_T *I__head, int long long unsigned I__user_id, LIST_NODE_T **_O_parent)
{
int rCode;
rCode = 0;
LIST_NODE_T *parent;
parent = 0;
LIST_NODE_T *curNode;
curNode = I__head;
if (0 == I__head)
        {
rCode = ENOENT;
goto CLEANUP;
        }
while (curNode)
        {
if ((*curNode).payload.user_id > I__user_id)
                {
break;
                }
parent = curNode;
curNode = (*curNode).next;
        }
if (_O_parent)
        {
*_O_parent = parent;
        }
CLEANUP:
return rCode;
}
int LIST_InsertNodeById(LIST_NODE_T **IO_head, int long long unsigned I__user_id, struct lfds711_stack_element I__se)
{
int rCode;
rCode = 0;
LIST_NODE_T *parent;
LIST_NODE_T *newNode;
newNode = 0;
newNode = __cs_safe_malloc(sizeof(*newNode));
if (0 == newNode)
        {
rCode = 12;
fprintf(stderr, "malloc() failed.\n");
goto CLEANUP;
        }
(*newNode).payload.user_id = I__user_id;
(*newNode).payload.se = I__se;
rCode = LIST_FetchParentNodeById(*IO_head, I__user_id, &parent);
switch (rCode)
        {
case 0:
break;
case ENOENT:
(*newNode).next = 0;
*IO_head = newNode;
rCode = 0;
goto CLEANUP;
default:
fprintf(stderr, "LIST_FetchParentNodeByName() reports: %d\n", rCode);
goto CLEANUP;
        }
if (0 == parent)
        {
(*newNode).next = *IO_head;
*IO_head = newNode;
goto CLEANUP;
        }
(*newNode).next = (*parent).next;
(*parent).next = newNode;
CLEANUP:
return rCode;
}
int LIST_FetchNodeById(LIST_NODE_T *I__head, int long long unsigned I__user_id, LIST_NODE_T **_O_node, LIST_NODE_T **_O_parent)
{
int rCode;
rCode = 0;
LIST_NODE_T *parent;
parent = 0;
LIST_NODE_T *curNode;
curNode = I__head;
while (curNode)
        {
if ((*curNode).payload.user_id == I__user_id)
                {
break;
                }
parent = curNode;
curNode = (*curNode).next;
        }
if (0 == curNode)
        {
rCode = ENOENT;
goto CLEANUP;
        }
if (_O_node)
        {
*_O_node = curNode;
        }
if (_O_parent)
        {
*_O_parent = parent;
        }
CLEANUP:
return rCode;
}
int LIST_DeleteNodeById(LIST_NODE_T **IO_head, int long long unsigned I__user_id)
{
int rCode;
rCode = 0;
LIST_NODE_T *parent;
LIST_NODE_T *delNode;
delNode = 0;
rCode = LIST_FetchNodeById(*IO_head, I__user_id, &delNode, &parent);
switch (rCode)
        {
case 0:
break;
case ENOENT:
fprintf(stderr, "Matching node not found.\n");
goto CLEANUP;
default:
fprintf(stderr, "LIST_FetchNodeByName() reports: %d\n", rCode);
goto CLEANUP;
        }
if (0 == parent)
        {
*IO_head = (*delNode).next;
        }
        else
        {
(*parent).next = (*delNode).next;
        }
free(delNode);
CLEANUP:
return rCode;
}
int LIST_Destroy(LIST_NODE_T **IO_head)
{
int rCode;
rCode = 0;
while (*IO_head)
        {
LIST_NODE_T *delNode;
delNode = *IO_head;
*IO_head = (*(*IO_head)).next;
free(delNode);
        }
return rCode;
}
struct lfds711_stack_state ss;
struct test_data
{
struct lfds711_stack_element se;
int long long unsigned user_id;
};
void *push(void *__cs_unused)
{
struct test_data *td;
int long long unsigned loop;
td = __cs_safe_malloc((sizeof(struct test_data)) * 1);
for (loop = 0; loop < 1; loop++)
        {
td[loop].user_id = loop;
td[loop].se.value = (void *) ((lfds711_pal_uint_t) (&td[loop]));
lfds711_stack_push(&ss, &td[loop].se);
        }
}
void *pop(void *__cs_unused)
{
struct lfds711_stack_element *se;
struct test_data *temp_td;
int res;
int count;
count = 0;
int loop;
for (loop = 0; loop < 1; loop++)
        {
temp_td = 0;
res = lfds711_stack_pop(&ss, &se);
if (res == 0)
                {
continue;
                }
temp_td = (*se).value;
count++;
        }
}
void writeIntofile(char *filename, LIST_NODE_T *listHead)
{
int filefd;
filefd = open(filename, (O_WRONLY | O_CREAT) | O_APPEND, 0666);
int saved;
saved = dup(1);
close(1);
dup(filefd);
PrintListPayloads(listHead);
close(filefd);
fflush(stdout);
dup2(saved, 1);
close(saved);
}
LIST_NODE_T *createList(LIST_NODE_T *listHead)
{
struct lfds711_stack_element *se;
struct test_data *temp_td;
int res;
res = lfds711_stack_pop(&ss, &se);
while (res != 0)
        {
temp_td = (*se).value;
LIST_InsertHeadNode(&listHead, (*temp_td).se, (*temp_td).user_id);
res = lfds711_stack_pop(&ss, &se);
        }
return listHead;
}
void readFile(char *filename, LIST_NODE_T *listHead)
{
char *line;
line = 0;
size_t len;
len = 0;
ssize_t read;
LIST_NODE_T *parent;
parent = 0;
LIST_NODE_T *curNode;
curNode = listHead;
char delim[] = ",";
int i;
i = 0;
int size;
size = GetListSize(curNode);
FILE *fp;
fp = fopen(filename, "r");
if (!fp)
        {
writeIntofile(filename, listHead);
__CSEQ_assert(0);
return;
        }
while ((read = getline(&line, &len, fp)) != (-1))
        {
char *ptr;
ptr = strtok(line, delim);
while (curNode)
                {
if ((*curNode).payload.user_id != atoi(ptr))
                        {
break;
                        }
i++;
parent = curNode;
curNode = (*curNode).next;
ptr = strtok(0, delim);
                }
if (i == size)
                {
fclose(fp);
return;
                }
i = 0;
        }
if (i != size)
        {
writeIntofile(filename, listHead);
__CSEQ_assert(0);
return;
        }
}
int main()
{
LIST_NODE_T *listHead;
listHead = 0;
lfds711_stack_init_valid_on_current_logical_core(&ss, 0);
__cs_t t1;
__cs_t t2;
__cs_create(&t1, 0, push, 0);
__cs_create(&t2, 0, pop, 0);
__cs_join(t1, 0);
__cs_join(t2, 0);
listHead = createList(listHead);
readFile("foo.txt", listHead);
return 0;
}
