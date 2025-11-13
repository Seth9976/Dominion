// 函数: _Znwm
// 地址: 0x10df6b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t bytes

bytes = arg1 != 0 ? arg1 : 1

while (true)
    int64_t result = malloc(bytes)
    
    if (result != 0)
        return result
    
    int64_t x0_1 = std::get_new_handler()
    
    if (x0_1 == 0)
        break
    
    x0_1()

void* x0_2 = __cxa_allocate_exception(8)
std::bad_alloc::bad_alloc()
__cxa_throw(x0_2, _typeinfo_for_std::bad_alloc, std::bad_alloc::~bad_alloc)
noreturn
