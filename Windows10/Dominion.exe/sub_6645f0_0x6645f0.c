// 函数: sub_6645f0
// 地址: 0x6645f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d2c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
float eax_2 = __security_cookie ^ &__saved_ebp
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm0 = *(arg1 + 0x1680)
xmm0 f- 0
struct _EXCEPTION_REGISTRATION_RECORD** result
result:1.b =
    (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    result = *(arg1 + 0x1420)
    int32_t ecx = *(arg1 + 0x1470)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    
    if (result != 0)
        int128_t xmm0_1 = *(data_147abe8 + 0x2c)
        void var_a4
        void* var_158_1 = &var_a4
        int32_t var_98_1 = xmm0_1
        int32_t eax_4 = sub_67d3c0(arg1 + 0x674, xmm0_1)
        int128_t xmm0_2 = *(arg1 + 0x1674)
        char* ecx_2 = eax_4
        int128_t var_58 = xmm0_2
        char edx
        
        if (not(xmm0_2 f<= 0.999000013f))
            edx = 0xff
        else if (0.00100000005f f<= xmm0_2)
            edx = (int.d(xmm0_2 f* 255f + 0.5f)).b
        else
            edx = 0
        
        float xmm0_5 = var_58:4.d
        
        if (not(xmm0_5 <= 0.999000013f))
            eax_4.b = 0xff
        else if (0.00100000005f <= xmm0_5)
            eax_4 = int.d(xmm0_5 * 255f + 0.5f)
        else
            eax_4.b = 0
        
        float xmm0_8 = var_58:8.d
        char var_8f_1 = eax_4.b
        
        if (not(xmm0_8 <= 0.999000013f))
            eax_4.b = 0xff
        else if (0.00100000005f <= xmm0_8)
            eax_4 = int.d(xmm0_8 * 255f + 0.5f)
        else
            eax_4.b = 0
        
        float xmm0_11 = var_58:0xc.d
        char var_8e_1 = eax_4.b
        
        if (not(xmm0_11 <= 0.999000013f))
            eax_4.b = 0xff
        else if (0.00100000005f <= xmm0_11)
            eax_4 = int.d(xmm0_11 * 255f + 0.5f)
        else
            eax_4.b = 0
        
        char var_8d_1 = eax_4.b
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = mulu.dp.d(0x80808081, zx.d(*ecx_2) * zx.d(edx) + 0x80)
        int32_t ecx_6 = edx.d
        uint32_t var_a8 = edx_1 u>> 7
        int32_t eax_11
        int32_t edx_3
        edx_3:eax_11 = mulu.dp.d(0x80808081, zx.d((ecx_6 u>> 8).b) * zx.d(ecx_2[1]) + 0x80)
        uint32_t var_a0 = edx_3 u>> 7
        int32_t eax_16
        int32_t edx_5
        edx_5:eax_16 = mulu.dp.d(0x80808081, zx.d((ecx_6 u>> 0x10).b) * zx.d(ecx_2[2]) + 0x80)
        char var_90_1
        var_90_1.d = edx_5 u>> 7
        int32_t eax_18
        int32_t edx_7
        edx_7:eax_18 = mulu.dp.d(0x80808081, (ecx_6 u>> 0x18) * zx.d(ecx_2[3]) + 0x80)
        uint8_t edx_8 = (edx_7 u>> 7).b
        result = zx.d(var_a8.b)
        int32_t var_b4 = ((zx.d(edx_8) << 8 | zx.d(var_90_1)) << 8 | zx.d(var_a0.b)) << 8 | result
        
        if (edx_8 != 0)
            uint32_t* var_158_2 = &var_a0
            sub_67d3c0(arg1 + 0x944, var_98_1)
            var_a8 = sub_64b360(*(arg1 + 0x1684), eax_2)
            uint32_t eax_25 = sub_65d8b0(&var_a0, &var_a8)
            char ecx_19 = *(arg1 + 0x1440)
            uint32_t var_b0_1 = eax_25
            var_a0.b = ecx_19
            int32_t* var_9c_2
            
            if (ecx_19 == 0)
                var_9c_2 = &var_b4
            else
                uint32_t var_40_1 = eax_25
                uint32_t var_38_1 = eax_25
                uint32_t var_30_1 = eax_25
                uint32_t var_28_1 = eax_25
                void* var_158_3 = &var_a4
                uint32_t var_44
                var_9c_2 = &var_44
                var_44 = sub_6398e0(sub_67d3c0(arg1 + 0x704, var_98_1), &var_b4)
                void* var_158_4 = &var_a4
                uint32_t var_3c_1 = sub_6398e0(sub_67d3c0(arg1 + 0x794, var_98_1), &var_b4)
                void* var_158_5 = &var_a4
                uint32_t var_34_1 = sub_6398e0(sub_67d3c0(arg1 + 0x824, var_98_1), &var_b4)
                void* var_158_6 = &var_a4
                uint32_t var_2c_1 = sub_6398e0(sub_67d3c0(arg1 + 0x8b4, var_98_1), &var_b4)
            
            int32_t edx_14 = *(arg1 + 0x1434)
            int32_t ecx_28 = *(arg1 + 0x1430)
            int32_t var_c0_1 = *(arg1 + 0x16d0)
            int128_t xmm0_16 = data_7ff520
            int32_t var_c4 = *(arg1 + 0x16cc)
            int128_t var_8c = xmm0_16
            int128_t var_164_1
            
            if (edx_14 * ecx_28 s> 1)
                int32_t var_158_7 = edx_14
                var_164_1:8.d = ecx_28
                var_164_1:4.d = &var_58
                int128_t* eax_37
                eax_37, edx_14 =
                    sub_6636d0(&var_58, edx_14, *(arg1 + 0x143c), var_98_1, *(arg1 + 0x1438))
                var_8c = *eax_37
            
            uint32_t eax_38 = *(arg1 + 0x14b0)
            var_90_1.d = eax_38
            
            if (eax_38 != 0 && *(eax_38 + 4) == 0x1d)
                bool cond:4_1 = *eax_38 != 0
                var_a8 = eax_38
                
                if (not(cond:4_1))
                    int32_t var_158_8 = 1
                    edx_14.b = 0
                    sub_69f4a0(eax_38, edx_14, eax_38)
                    eax_38 = var_90_1.d
                
                *(eax_38 + 0x1c) += 1
                int32_t var_14_1 = 2
                uint32_t eax_41
                eax_41, edx_14 = sub_6edec0(**var_90_1.d)
                int32_t var_14_2 = 0xffffffff
                *(eax_38 + 0x1c) -= 1
                var_90_1.d = eax_41
                var_a8 = 0
            
            float ecx_32 = *(arg1 + 0x13fc)
            float esi_8 = 0f
            
            switch (ecx_32)
                case 1
                    esi_8 = ecx_32 i+ 1
                case 2
                    esi_8 = ecx_32 i+ 1
                case 3
                    esi_8 = ecx_32 i+ 1
                case 4
                    esi_8 = ecx_32 i+ 1
                case 5
                    esi_8 = ecx_32 - 4
                case 6
                    esi_8 = ecx_32
                case 7
                    esi_8 = ecx_32
                case 8
                    esi_8 = 1.12103877e-44f
            
            void var_148
            void* var_158_9 = &var_148
            int128_t var_68 = *(arg1 + 0x1620)
            var_58 = *(arg1 + 0x1630)
            int128_t* eax_43 = sub_64b1b0(&var_148, edx_14, &var_68)
            bool cond:5_1 = *(arg1 + 0x16ac) == 0
            int128_t var_108 = *eax_43
            int128_t var_f8_1 = eax_43[1]
            int128_t var_e8_1 = eax_43[2]
            int128_t var_d8_1 = eax_43[3]
            int128_t var_7c
            __builtin_memset(&var_7c, 0, 0x14)
            int32_t eax_44
            
            if (cond:5_1)
                int128_t* var_158_10 = &var_58
                sub_67d460(arg1 + 0x554, *(data_147abe8 + 0x2c))
                float xmm1_4 = *(arg1 + 0x16cc) - 0f
                float xmm0_26 = *(arg1 + 0x16d0) - 0f
                int32_t eax_46 = *(arg1 + 0x1410)
                float xmm1_6 = xmm1_4 f* var_58:8.d + 0f
                float xmm2_11 = xmm1_4 f* var_58.d + 0f
                float xmm3_3 = var_58:4.d * xmm0_26 + 0f
                float xmm4_3 = var_58:0xc.d * xmm0_26 + 0f
                
                if (eax_46 u> 5)
                    char const* const var_158_12 = "UI2DrawImageSlow"
                    var_164_1:8.d = 0x32a1
                    var_164_1:4.d = "C:\x\ax2017\Engine\UI2.cpp"
                    sub_63b870(eax_46, &data_801800, "Halt")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t var_6c
                
                switch (eax_46)
                    case 0, 2
                        eax_44 = var_6c
                    case 1, 5
                        var_68:0xc.d = xmm2_11
                        eax_44 = 0xffffffff
                        var_58.d = xmm3_3
                        var_58:4.d = xmm1_6
                        var_58:8.d = xmm4_3
                        var_7c = var_68
                    case 3
                        var_68:0xc.d = xmm2_11
                        eax_44 = 0xc
                        var_58.d = xmm3_3
                        var_58:4.d = xmm1_6
                        var_58:8.d = xmm4_3
                        var_7c = var_68
                    case 4
                        var_68:0xc.d = xmm2_11
                        eax_44 = 3
                        var_58.d = xmm3_3
                        var_58:4.d = xmm1_6
                        var_58:8.d = xmm4_3
                        var_7c = var_68
            else
                eax_44 = *(arg1 + 0x16ac)
                var_7c = *(arg1 + 0x169c)
            
            uint32_t xmm0_30 = *(arg1 + 0x1428)
            
            if (arg2 != 0)
                eax_44 = 0
            
            uint32_t var_ac = xmm0_30
            int32_t var_6c_1 = eax_44
            int32_t var_158_11 = var_90_1.d
            var_164_1:8.d = &var_8c
            var_164_1:4.d = var_a0
            var_a8 = xmm0_30
            var_164_1.d = var_9c_2
            int128_t* const var_174_1 = &data_7ff530
            result = sub_684c00(&var_ac, ecx, result_1, &var_ac, &var_c4, esi_8, &data_7ff530, 
                *(arg1 + 0x142c), &var_7c, &var_108, var_164_1)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
