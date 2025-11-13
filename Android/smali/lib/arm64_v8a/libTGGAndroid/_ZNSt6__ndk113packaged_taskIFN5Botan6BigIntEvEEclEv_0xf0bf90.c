// 函数: _ZNSt6__ndk113packaged_taskIFN5Botan6BigIntEvEEclEv
// 地址: 0xf0bf90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x8 = *(entry_x0 + 0x30)

if (x8 == 0)
    sub_f0bd18(3)
    noreturn

if ((zx.d(*(x8 + 0x70)) & 1) == 0)
    void* result_1 = nullptr
    int64_t x20_1 = *(x8 + 0x10)
    std::exception_ptr::~exception_ptr()
    
    if (x20_1 == 0)
        (*(**(entry_x0 + 0x20) + 0x28))()
        void* x0_1 = *(entry_x0 + 0x30)
        
        if (x0_1 == 0)
            sub_f0bd18(3)
            noreturn
        
        sub_f0c0f0(x0_1, &result_1)
        void* result = result_1
        
        if (result == 0)
            return result
        
        void* result_2 = result
        int64_t var_38
        return Botan::deallocate_memory(result, (var_38 - result) s>> 2, 4)

sub_f0bd18(2)
noreturn
