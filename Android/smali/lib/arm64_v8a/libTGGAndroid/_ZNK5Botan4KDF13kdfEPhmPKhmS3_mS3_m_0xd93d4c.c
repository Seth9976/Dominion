// 函数: _ZNK5Botan4KDF13kdfEPhmPKhmS3_mS3_m
// 地址: 0xd93d4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 8)
(*(*x0 + 0x18))(x0, arg4, arg5)
int64_t* x0_1 = *(arg1 + 8)
int64_t arg_0
(*(*x0_1 + 0x18))(x0_1, arg8, arg_0)
int64_t* x0_2 = *(arg1 + 8)
(*(*x0_2 + 0x18))(x0_2, arg6, arg7)

if ((***(arg1 + 8))() u<= arg3)
    int64_t* x0_7 = *(arg1 + 8)
    (*(*x0_7 + 0x20))(x0_7, arg2)
    jump(***(arg1 + 8))

*(arg1 + 8)
Botan::Buffered_Computation::final()
void* var_58
void* var_50_1
int64_t var_48

if (arg3 != 0)
    if (arg2 == 0 || var_58 == 0)
        int64_t* x0_11 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        
        if (var_58 != 0)
            void* var_50_2 = var_58
            Botan::deallocate_memory(var_58, var_48 - var_58, 1)
        
        sub_1101e04(x0_11)
        noreturn
    
    memmove(arg2, var_58, arg3)
    var_50_1 = var_58
    Botan::deallocate_memory(var_58, var_48 - var_58, 1)
else if (var_58 != 0)
    var_50_1 = var_58
    Botan::deallocate_memory(var_58, var_48 - var_58, 1)
return arg3
