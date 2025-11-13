// 函数: _ZnwmSt11align_val_t
// 地址: 0x10df7b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
size_t size

size = arg1 != 0 ? arg1 : 1

size_t alignment

alignment = arg2 u> 8 ? arg2 : 8

int64_t memptr

while (posix_memalign(&memptr, alignment, size) != 0)
    int64_t x0_2 = std::get_new_handler()
    
    if (x0_2 == 0)
        void* x0_4 = __cxa_allocate_exception(8)
        std::bad_alloc::bad_alloc()
        __cxa_throw(x0_4, _typeinfo_for_std::bad_alloc, std::bad_alloc::~bad_alloc)
        noreturn
    
    x0_2()

if (*(x21 + 0x28) == x8)
    return memptr

__stack_chk_fail()
noreturn
