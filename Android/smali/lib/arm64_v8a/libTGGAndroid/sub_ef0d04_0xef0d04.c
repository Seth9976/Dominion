// 函数: sub_ef0d04
// 地址: 0xef0d04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg3 & 0x3f) == 0)
    size_t i = arg3
    int32_t var_4c = i.d
    int128_t* x20_1 = arg2
    (*(*arg4 + 0x18))(arg4, &var_4c, 4)
    int64_t x1_1 = *arg5
    (*(*arg4 + 0x18))(arg4, x1_1, arg5[1] - x1_1)
    int32_t var_48 = arg6
    (*(*arg4 + 0x18))(arg4, &var_48, 4)
    int32_t var_44 = arg7
    (*(*arg4 + 0x18))(arg4, &var_44, 4)
    int64_t result
    int128_t v0_1
    int128_t v1_1
    result, v0_1, v1_1 = (*(*arg4 + 0x20))(arg4, *arg1)
    
    if (i u>= 0x41)
        do
            if (x20_1 == 0)
                goto label_ef0e64
            
            int128_t* x8_11 = *arg1
            
            if (x8_11 == 0)
                goto label_ef0e64
            
            v0_1 = x8_11[1]
            i -= 0x20
            *x20_1 = *x8_11
            x20_1[1] = v0_1
            x20_1 = &x20_1[2]
            int64_t x1_5 = *arg1
            (*(*arg4 + 0x18))(arg4, x1_5, arg1[1] - x1_5)
            result, v0_1, v1_1 = (*(*arg4 + 0x20))(arg4, *arg1)
        while (i u> 0x40)
    
    if (i == 0)
        return result
    
    if (x20_1 != 0)
        return memmove(x20_1, *arg1, i)
    
label_ef0e64:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

int64_t* x0_8
int64_t* x1_8
int64_t x2_3
int64_t x3
int64_t x4
int64_t x5
int64_t x6
int64_t x7
x0_8, x1_8, x2_3, x3, x4, x5, x6, x7 = Botan::assertion_failure("output_len % 64 == 0", 
    &data_793a18, "Htick", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x26f2)
void var_50
return sub_ef0e90(x0_8, x1_8, x2_3, x3, x4, x5, x6, x7, var_50) __tailcall
