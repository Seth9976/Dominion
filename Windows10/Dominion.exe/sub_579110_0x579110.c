// 函数: sub_579110
// 地址: 0x579110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
uint32_t edx
ecx, edx = __chkstk(0x10b8)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
uint32_t eax_2 = sub_5916b0(arg2)
void* var_1098 = arg2
int32_t var_c98 = 1
char var_1099

if (sub_578f60(ecx, &var_1098) == 0)
    sub_5ee870()
    var_1099 = 1
else
    var_1099 = 0

int32_t eax_6 = arg2 u>> 4 & 3

if (eax_6 != 1)
    goto label_579269

if (sub_5757f0(eax_6 - 1, (arg2 u>> 0x12).w, ecx, 0x40, eax_6 - 1) == 0)
    goto label_579269

uint32_t eax_9 = sub_5916b0(arg2)
void* eax_10 = sub_573400()
int32_t ecx_4 = *(eax_10 + 0x28)
int32_t eax_11 = *(eax_10 + 0x2c)
uint32_t eax_13 = zx.d(eax_9.w)

if (eax_13 u>= 0x320)
    sub_591930()

uint32_t var_10b4 = eax_9
int32_t var_10b0_2 = ecx[eax_13 * 0x19 + 0x695]
void* eax_17 = sub_573050(&var_10b4, edx, ecx, &var_10b4)
*(eax_17 + 0x50) = ecx_4
int32_t var_14_4 = 0
*(eax_17 + 0x54) = eax_11
sub_57ff10(eax_17, edx, ecx, 0x1a, nullptr, var_14_4)
TEB* fsbase
void* ecx_11 = *fsbase->ThreadLocalStoragePointer
int32_t eax_18 = *(ecx_11 + 0xf010)

if (eax_18 s> 0)
    *(ecx_11 + 0xf010) = eax_18 - 1
label_579269:
    
    if (eax_2 != 0)
        int32_t eax_20 = ecx[0x541]
        
        if (eax_20 != 3 && eax_20 != 5 && eax_20 != 4 && eax_20 != 6)
            void* var_2c
            __builtin_memset(&var_2c, 0, 0x1c)
            uint32_t ecx_12
            ecx_12.b = eax_20 == 2
            int128_t* var_28
            int32_t var_24
            int32_t var_20
            int32_t var_1c_2
            int32_t var_18_3
            int32_t var_14_5
            sub_61b1b0(eax_20, 0x16, ecx_12.b, 0xffffffff, eax_2, 2, 1, var_2c, var_28, var_24, 
                var_20, var_1c_2, var_18_3, var_14_5)
    
    int32_t eax_22 = ecx[0x541]
    
    if (eax_22 != 3 && eax_22 != 5 && eax_22 != 4 && eax_22 != 6 && ecx[0x540].b == 0)
        uint32_t eax_21 = edx
        
        if (edx == ecx[0x673])
            eax_21 = ecx[0x674]
        
        int32_t var_2c_1
        __builtin_memset(&var_2c_1, 0, 0x1c)
        int32_t* var_28_1
        int32_t var_24_1
        int32_t var_20_1
        int32_t var_1c_3
        int32_t var_18_4
        int32_t var_14_6
        eax_22 = sub_59f9b0(eax_21, edx, ecx, eax_21, 0x1f, var_2c_1, var_28_1, var_24_1, var_20_1, 
            var_1c_3, var_18_4, var_14_6)
    
    void* eax_23
    int32_t* edx_8
    eax_23, edx_8 = sub_573260(eax_22, edx, ecx, arg2)
    uint32_t eax_25 = arg2 & 0x30
    *(eax_23 + 0x40) = arg2 u>> 6 & 0xfff
    *(eax_23 + 0x68) = arg3
    *(eax_23 + 0x64) = arg4
    uint32_t var_10a0_2 = eax_25
    int32_t i_1
    
    if (eax_25 == 0)
        void* ecx_21 = sub_576940(eax_25, edx_8, ecx, arg2)
        *(eax_23 + 0x44) = 0
        void var_c90
        *(eax_23 + 0x48) = &var_c90
        edx_8 = ecx_21 + 0x70
        
        if (*edx_8 != 0)
            edx_8 = sub_578f00(&var_c90, edx_8, ecx, &var_c90, eax_23 + 0x44)
        
        *(eax_23 + 0x58) = *(ecx_21 + 0x74)
        *(eax_23 + 0x5c) = *(ecx_21 + 0x78)
        int32_t ecx_23 = *(ecx_21 + 0x3c)
        *(eax_23 + 0x50) = *(ecx_21 + 0x38)
        eax_25 = var_10a0_2
        *(eax_23 + 0x54) = ecx_23
        i_1 = 1
        goto label_5793a8
    
    i_1 = 1
    
    if (eax_25 == 0x30)
        if (ecx[(arg2 u>> 0x12) * 8 + 0x54b7] s< 1)
            eax_25, edx_8 = sub_591930()
        
        i_1 = ecx[(arg2 u>> 0x12) * 8 + 0x54b7]
    else
    label_5793a8:
        
        if (eax_25 == 0)
            eax_25, edx_8 = sub_576940(eax_25, edx_8, ecx, arg2)
            *(eax_25 + 0x30) = 1
    
    if (i_1 s> 0)
        int32_t i
        
        do
            eax_25, edx_8 = sub_578a00(eax_25, edx, ecx, arg2)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* ecx_26 = *fsbase->ThreadLocalStoragePointer
    eax_18 = *(ecx_26 + 0xf010)
    
    if (eax_18 s> 0)
        *(ecx_26 + 0xf010) = eax_18 - 1
        int32_t result = ecx[0x541]
        
        if (result != 3 && result != 5 && result != 4 && result != 6 && ecx[0x540].b == 0)
            uint32_t ecx_27 = edx
            
            if (edx == ecx[0x673])
                ecx_27 = ecx[0x674]
            
            int32_t var_2c_2
            __builtin_memset(&var_2c_2, 0, 0x1c)
            int32_t* var_28_2
            int32_t var_24_2
            int32_t var_20_2
            int32_t var_1c_4
            int32_t var_18_6
            int32_t var_14_12
            result, edx_8 = sub_59f9b0(edx, edx, ecx, ecx_27, 0x20, var_2c_2, var_28_2, var_24_2, 
                var_20_2, var_1c_4, var_18_6, var_14_12)
        
        if (eax_2 != 0)
            result = ecx[0x541]
            
            if (result != 3 && result != 5 && result != 4 && result != 6)
                void* var_30_4
                __builtin_memset(&var_30_4, 0, 0x20)
                uint32_t ecx_29
                ecx_29.b = result == 2
                void* var_2c_3
                int128_t* var_28_3
                int32_t var_24_3
                int32_t var_20_3
                int32_t var_1c_5
                int32_t var_18_7
                int32_t var_14_13
                result, edx_8 = sub_61b1b0(result, 0x16, ecx_29.b, 0xffffffff, eax_2, 2, var_30_4, 
                    var_2c_3, var_28_3, var_24_3, var_20_3, var_1c_5, var_18_7, var_14_13)
        
        if (var_10a0_2 == 0)
            int32_t* eax_35
            int32_t edx_11
            eax_35, edx_11 = sub_576940(result, edx_8, ecx, arg2)
            result = *eax_35
            
            if (result == 3 || result == 4 || result == 5)
                result = sub_576940(result, edx_11, ecx, arg2)
                *(result + 0x54) = 0
                ecx[0x66e] -= 1
                __builtin_memcpy(result, ecx[0x66e] * 0xa8 + &ecx[0xed5a], 0xa8)
        
        result.b = var_1099
        CookieCheckFunction(result)
        return result

sub_63b870(eax_18, &data_801800, "cs.numContexts > 0", 
    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
