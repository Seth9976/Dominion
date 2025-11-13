// 函数: sub_581700
// 地址: 0x581700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edx = arg4
int32_t esi = 0
void* ecx = *(edx * 0x64 + arg3 + 0x1a48)
int32_t i = *(ecx + 0xa8)
int32_t result
uint32_t var_10
uint32_t esi_1

if (i == 0)
label_58174e:
    esi_1 = zx.d(edx.w)
label_581757:
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_4 = esi_1 * 0x64
    sub_576e90(eax_4, arg3, &var_10, arg2, *(eax_4 + arg3 + 0x1a4c), 0)
    uint32_t var_d8[0x6]
    uint32_t* eax_5 = sub_576c00(&var_d8, var_10)
    int96_t xmm0_1 = (*eax_5).12
    char eax_6 = (eax_5[4]).b
    int32_t esi_2 = *(arg2 * 0x5a30 + arg3 + 0x174f4)
    int32_t eax_8 = xmm0_1
    
    if (eax_8 s< esi_2)
        esi_2 = eax_8
    
    uint32_t eax_9 = eax_8 - esi_2
    var_10 = eax_9
    
    if (eax_8 - esi_2 s< 0)
        eax_9 = sub_591930()
    
    int32_t eax_10 = sub_583fc0(eax_9, arg2, arg3, 0xa00)
    uint32_t var_f8_1 = 0x29
    uint32_t eax_11 = sub_576b30(eax_10, arg2, arg3, 0x29, 0, 0, 0)
    int32_t ecx_6
    
    if (eax_11 s<= 0)
        ecx_6 = eax_10
    else
        ecx_6 = eax_10 + sub_583fc0(eax_11, arg2, arg3, 0x601)
    
    uint32_t eax_20 = var_10
    
    if (eax_20 s> ecx_6)
        sub_591930()
        eax_20 = var_10
    
    if (eax_20 != 0)
        eax_20 = sub_586550(eax_20, arg2, arg3, eax_20, 0)
    
    if (esi_2 != 0)
        var_f8_1 = 0
        sub_590760(eax_20, arg2, arg3, 0, neg.d(esi_2), 0, 2)
    
    result = xmm0_1:4.d
    
    if (result != 0)
        int32_t eax_21 = neg.d(result)
        var_f8_1 = 3
        result = sub_590760(eax_21, arg2, arg3, 3, eax_21, 0, 2)
    
    int32_t esi_4 = xmm0_1:8.d
    
    if (esi_4 != 0)
        result = sub_576dd0(result, arg2, arg3, 0x2f, 0)
        int32_t* esi_5 = esi_4 - result
        
        if (result != 0)
            result = sub_581060(result, arg2, arg3, 0x2f)
        
        if (esi_5 s> 0)
            int32_t var_ec_3 = 0
            int32_t var_f0_4 = 0xffffffff
            int32_t var_fc
            sub_571fa0(result, arg2, arg3, 0xc00, esi_5, 0x476, nullptr, var_fc, var_f8_1, 0)
            int32_t var_78
            memset(&var_78, 0, 0x48)
            var_78 = 4
            int32_t* var_70_1 = esi_5
            int128_t xmm0_2 = var_78.o
            var_10 = 0x14
            int128_t var_c0 = xmm0_2
            int128_t var_68
            int128_t var_b0_1 = var_68
            int128_t var_58
            int128_t var_a0_1 = var_58
            int128_t var_48
            int128_t var_90_1 = var_48
            int64_t var_38
            int64_t var_80_1 = var_38
            result = sub_580700(esi_5, &var_10, 1, &var_c0, 0, nullptr, 0, nullptr)
    
    if (eax_6 != 0)
        result = sub_591930()
else
    while (i != 4)
        esi += 1
        i = *(esi * 0xb4 + ecx + 0xa8)
        
        if (i == 0)
            goto label_58174e
    
    esi_1 = zx.d(edx.w)
    uint32_t eax_14 = *(esi * 0xb4 + ecx + 0xbc)
    var_10 = eax_14
    
    if (eax_14 == 0)
        goto label_581757
    
    if (esi_1 u>= 0x320)
        sub_591930()
        edx = arg4
    
    int32_t var_1c = edx
    int32_t var_18_2 = *(esi_1 * 0x64 + arg3 + 0x1a54)
    sub_573050(&var_1c, arg2, arg3, &var_1c)
    char eax_18 = var_10()
    TEB* fsbase
    void* ecx_9 = *fsbase->ThreadLocalStoragePointer
    int32_t eax_19 = *(ecx_9 + 0xf010)
    
    if (eax_19 s<= 0)
        sub_63b870(eax_19, &data_801800, "cs.numContexts > 0", 
            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = eax_19 - 1
    *(ecx_9 + 0xf010) = result
    
    if (eax_18 == 0)
        goto label_581757
CookieCheckFunction(result)
return result
