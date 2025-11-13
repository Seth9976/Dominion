// 函数: sub_615070
// 地址: 0x615070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_474
void* eax_3 = sub_614d20(arg7, arg6, arg2, arg7, &var_474)
void* eax_4 = sub_637730(arg3 + 0x20528)
*(eax_4 + 0x1f4) = arg4
*(eax_4 + 0x2c) = 5
*(eax_4 + 0x1f0) = arg2
int32_t edx_1 = *arg5
*(eax_4 + 0x1fc) = arg5[1]
*(eax_4 + 0x1f8) = edx_1
*(eax_4 + 0x200) = *arg6
*(eax_4 + 0x210) = arg6[4]
*(eax_4 + 0x218) = 0
int32_t var_4d4
int128_t var_4c4
int128_t var_4b4
int128_t var_4a4
int128_t var_494
int128_t var_484
int128_t var_46c

if (eax_3 == 0)
    *(eax_4 + 0x21c) = 1
    *(eax_4 + 0x214) = 0
    memset(&var_4d4, 0, 0x60)
    int32_t var_4c8_1 = var_474
    var_4d4 = 0x1f
    int32_t var_4cc_1 = arg2
    int32_t var_4bc_1 = 0
    var_46c = var_4d4.o
    int128_t var_45c_1 = var_4c4
    int128_t var_44c_1 = var_4b4
    int128_t var_43c_1 = var_4a4
    int128_t var_42c_1 = var_494
    int128_t var_41c_1 = var_484
    sub_5cb630(eax_4 + 0x258, &var_46c)
else
    *(eax_4 + 0x21c) = 0
    *(eax_4 + 0x214) = *(eax_3 + 0x214)
    *(eax_3 + 0x21c) += 1
    *(eax_3 + 0x214) = *(eax_4 + 0x1c28)

int32_t esi_2 = 0
void* i = data_b809e0
int32_t var_40c[0x101]

for (void* ecx_8 = data_b809e4 * 0x1c30 + i; i u< ecx_8; i += 0x1c30)
    if ((*(i + 0x1c28) & 0xffff0000) != 0)
        while (i != 0xffffffff)
            if (*(i + 0x2c) == 5 && *(i + 0x1f0) == arg2 && *(i + 0x21c) s> 0)
                var_40c[esi_2] = i
                esi_2 += 1
            
            i += 0x1c30
            
            if (i u>= ecx_8)
                break
            
            while ((*(i + 0x1c28) & 0xffff0000) == 0)
                i += 0x1c30
                
                if (i u>= ecx_8)
                    goto label_61526c
        
        break

label_61526c:
int32_t eax_10 = esi_2 << 2 s>> 2
void* result = sub_4d4e30(eax_10, &var_40c[esi_2], &var_40c, eax_10, sub_614ff0)
int32_t edi_1 = 0

if (esi_2 s> 0)
    do
        memset(&var_4d4, 0, 0x60)
        void* ecx_11 = var_40c[edi_1]
        var_4d4 = 0x1f
        int32_t var_4cc_2 = arg2
        int32_t var_4c8_2 = edi_1
        int32_t var_4bc_2 = 0
        var_46c = var_4d4.o
        int128_t var_45c_2 = var_4c4
        int128_t var_44c_2 = var_4b4
        int128_t var_43c_2 = var_4a4
        int128_t var_42c_2 = var_494
        int128_t var_41c_2 = var_484
        result = sub_5cb630(ecx_11 + 0x258, &var_46c)
        edi_1 += 1
    while (edi_1 s< esi_2)

CookieCheckFunction(result)
return result
