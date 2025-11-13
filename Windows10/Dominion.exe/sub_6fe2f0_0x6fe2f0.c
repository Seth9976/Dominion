// 函数: sub_6fe2f0
// 地址: 0x6fe2f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void var_48
int32_t* eax_3 = sub_6fe1d0(&var_48, arg2, arg1, &var_48)
void* result = eax_3[2]
int64_t var_38 = *eax_3
int32_t* i = var_38.d
void* result_1 = result

for (; i != 0; i = var_38.d)
    int128_t var_68
    sub_4eb600(&i[4], arg2, &var_68, &i[4])
    int128_t xmm0_1 = var_68
    int32_t eax_5 = *i
    int128_t var_2c = xmm0_1
    int128_t var_58
    int128_t var_1c_1 = var_58
    char const* const var_9c
    int32_t var_98
    char const* const var_94_3
    int32_t eax_7
    char* ecx_15
    
    if (eax_5 == 1)
        void* ecx_6 = data_147abe8
        eax_7 = i[1]
        
        if (ecx_6 == 0)
        label_6fe48e:
            var_94_3 = "GetGameData"
            var_98 = 0x45
            var_9c = "C:\x\ax2017\Engine\Game.h"
            ecx_15 = "gpGameData"
            goto label_6fe4a4
        
        void* edx_5 = *(ecx_6 + 0x10)
        
        if (eax_7 == 0)
        label_6fe441:
            *var_38:4.d = i[3]
        label_6fe445:
            sub_6fdf80(i)
            result_1.b = 1
            var_38.d = 0
        else
            uint32_t ecx_7 = zx.d(eax_7.w)
            
            if (ecx_7 u>= *(edx_5 + 4))
                goto label_6fe441
            
            void* ecx_9 = ecx_7 * 0x7c + *edx_5
            
            if (*(ecx_9 + 0x78) != eax_7 || ecx_9 == 0)
                goto label_6fe441
            
            *(ecx_9 + 0x2c) = xmm0_1
            *(ecx_9 + 0x3c) = var_58
            sub_6bca30(ecx_9, data_8c4634)
    else
        eax_7 = eax_5 - 2
        
        if (eax_5 != 2)
            var_94_3 = "AttachPointUpdate"
            var_98 = 0x15c
            var_9c = "C:\x\ax2017\Engine\Attachment.cpp"
            ecx_15 = "Halt"
        label_6fe4a4:
            sub_63b870(eax_7, &data_801800, ecx_15, var_9c, var_98, var_94_3)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        void* ecx_1 = data_147abe8
        eax_7 = i[2]
        
        if (ecx_1 == 0)
            goto label_6fe48e
        
        void* ecx_2 = *(ecx_1 + 0xc)
        
        if (eax_7 == 0)
            *var_38:4.d = i[3]
            goto label_6fe445
        
        uint32_t edx_1 = zx.d(eax_7.w)
        
        if (edx_1 u>= *(ecx_2 + 4))
            *var_38:4.d = i[3]
            goto label_6fe445
        
        int32_t* edx_3 = edx_1 * 0x94 + *ecx_2
        
        if (edx_3[0x24] != eax_7 || edx_3 == 0)
            *var_38:4.d = i[3]
            goto label_6fe445
        
        int32_t ecx_3 = data_bf23b0
        edx_3[0x18] = data_bf23ac
        edx_3[0x19] = ecx_3
        float var_88[0x8]
        float* eax_10 = sub_64b1b0(&var_88, edx_3, &var_2c, &var_88)
        int128_t xmm1_2 = *(eax_10 + 0x10)
        int128_t xmm2_1 = *(eax_10 + 0x20)
        int128_t xmm3_1 = *(eax_10 + 0x30)
        *(edx_3 + 0x20) = *eax_10
        *(edx_3 + 0x30) = xmm1_2
        float xmm1_3 = data_8c4634
        *(edx_3 + 0x40) = xmm2_1
        *(edx_3 + 0x50) = xmm3_1
        sub_6e5cc0(edx_3, i.w, arg2, xmm1_3)
    result = sub_6fe250(&var_38)

CookieCheckFunction(result)
return result
