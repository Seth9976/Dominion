// 函数: sub_10ff940
// 地址: 0x10ff940
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
uint64_t result

if (*(arg1 + 8) == *(arg2 + 8))
    result = 1
else
    int128_t v0_1
    result, v0_1 = __dynamic_cast(arg2, _typeinfo_for___cxxabiv1::__shim_type_info, 
        &_typeinfo_for___cxxabiv1::__class_type_info, 0)
    
    if (result != 0)
        v0_1.q = 0
        v0_1:8.q = 0
        uint64_t result_1 = result
        int64_t var_80_1 = 0
        void* var_78_1 = arg1
        int64_t var_70_1 = -1
        int128_t var_49_1 = zx.o(0)
        int64_t var_68_1 = (zx.o(0)).q
        int32_t var_58_1 = (zx.o(0)).d
        var_49_1:9.d = 1
        (*(*result + 0x38))(result, &result_1, *arg3, 1, v0_1)
        result = zx.q(var_58_1 == 1 ? 1 : 0)
        
        if (var_58_1 == 1)
            *arg3 = var_68_1

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
