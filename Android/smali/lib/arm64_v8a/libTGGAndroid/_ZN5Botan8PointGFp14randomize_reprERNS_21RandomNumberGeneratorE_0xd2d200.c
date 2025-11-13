// 函数: _ZN5Botan8PointGFp14randomize_reprERNS_21RandomNumberGeneratorE
// 地址: 0xd2d200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0_1 = (*(**arg1 + 0x30))()
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_28_1

if (x0_1 != 0)
    if (x0_1 u>> 0x3e != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* result_3 = Botan::allocate_memory(x0_1, 4)
    int64_t x2_1 = x0_1 << 2
    void* x21_2 = result_3 + x2_1
    result_1 = result_3
    var_28_1 = x21_2
    memset(result_3, 0, x2_1)
    void* var_30_1 = x21_2

std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* entry_x1
Botan::PointGFp::randomize_repr(arg1, entry_x1)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, (var_28_1 - result) s>> 2, 4)
