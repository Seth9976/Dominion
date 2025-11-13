// 函数: sub_6cded0
// 地址: 0x6cded0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t* eax_1 = __security_cookie ^ &__saved_ebp
int32_t* var_c = eax_1
int32_t var_138
char const* const var_134
char* ecx

if (*arg3 == 5)
    float var_d0[0xa]
    float* eax_3 = sub_6cd460(&var_d0, arg2, arg3, &var_d0)
    int128_t var_40 = *eax_3
    int128_t var_30_1 = *(eax_3 + 0x10)
    int64_t var_20_1 = *(eax_3 + 0x20)
    float var_f8[0xa]
    float* eax_5 = sub_6db9e0(&var_f8, arg2 + 0x3c, &var_40, &var_f8)
    int32_t ecx_2 = arg3[0x26]
    int32_t edx_1 = arg4[1]
    var_40 = *eax_5
    int128_t var_30_2 = *(eax_5 + 0x10)
    int32_t eax_6 = arg4[2]
    int32_t var_10_1 = arg3[0x27]
    int64_t var_20_2 = *(eax_5 + 0x20)
    int32_t ecx_5 = (ecx_2 * eax_6 + edx_1) * arg3[0x25]
    int64_t var_18 = *(arg3 + 0x94)
    int32_t* ecx_6 = ecx_5 + *arg4
    int32_t eax_9
    int32_t edx_2
    edx_2:eax_9 = sx.q(ecx_6)
    int32_t ecx_7 = var_18:4.d
    eax_1 = divs.dp.d(sx.q(ecx_6), ecx_7 * var_18.d)
    
    if (mods.dp.d(edx_2:eax_9, var_18.d) != *arg4
            || mods.dp.d(sx.q(divs.dp.d(edx_2:eax_9, var_18.d)), ecx_7) != edx_1 || eax_1 != eax_6)
        var_134 = "FabSubstateTable"
        var_138 = 0x1cb
        ecx = "FabSubstateCoordFromSlot(el, elState, idx) == coord"
    else
        void* result = sub_6cde00(arg2, ecx_6)
        eax_1 = ecx_6
        int32_t edx_9 = arg3[0x2c]
        int32_t ecx_11 = arg3[0x2a]
        int32_t* ecx_12
        
        if (eax_1 s>= edx_9)
            ecx_12 = *(ecx_11 + (edx_9 << 3) - 8)
        else
            ecx_12 = *(ecx_11 + (eax_1 << 3))
        
        *result = ecx_12
        int128_t xmm0_10
        int128_t xmm1_1
        int64_t xmm2_1
        
        if (ecx_12 != 0)
            if (ecx_12[1] == 0x20)
                uint128_t xmm0_8 = *sub_5af880(ecx_12)
                int32_t* var_98_1 = xmm0_8.d
                
                if (_mm_bsrli_si128(xmm0_8, 8) == 0)
                    goto label_6ce00b
                
                float var_120[0xa]
                float* eax_17 = sub_6cd460(&var_120, result, var_98_1, &var_120)
                xmm0_10 = *eax_17
                xmm1_1 = *(eax_17 + 0x10)
                xmm2_1 = *(eax_17 + 0x20)
                goto label_6ce07c
            
            var_134 = "FabDefGet"
            var_138 = 0xeb
            ecx = "ptr->assetType == ASSET_TYPE_FAB"
        else
        label_6ce00b:
            xmm0_10 = data_800560
            xmm1_1 = data_800570
            xmm2_1 = 0x3f8000003f800000
        label_6ce07c:
            int32_t eax_18 = *(arg2 + 0x6c)
            int128_t var_68 = xmm0_10
            int128_t var_58_1 = xmm1_1
            int64_t var_48_1 = xmm2_1
            int32_t eax_19
            int64_t xmm0_11
            
            if (eax_18 s<= *(arg2 + 0x5c))
                xmm0_11 = *(arg3 + 0x94)
                eax_19 = arg3[0x27]
            else
                xmm0_11 = *(arg2 + 0x70)
                eax_19 = *(arg2 + 0x78)
            
            int32_t edx_11 = arg3[0x28]
            int32_t var_10_2 = eax_19
            var_18 = xmm0_11
            void var_a8
            eax_1 = sub_6cef10(&var_a8, edx_11, &var_18, &var_a8, arg4, &var_40, &var_68)
            int128_t xmm1_2 = *(eax_1 + 0x10)
            *(result + 0x3c) = *eax_1
            *(result + 0x4c) = xmm1_2
            
            if (*(result + 0x3c) f> 0f)
                CookieCheckFunction(result)
                return result
            
            var_134 = "FabSubstateTable"
            var_138 = 0x1df
            ecx = "substate.transform.t.s > 0"
else
    var_134 = "FabSubstateTable"
    var_138 = 0x1c4
    ecx = "el.type == FAB_DISTRIBUTE"

sub_63b870(eax_1, &data_801800, ecx, "C:\x\ax2017\Engine\FabDef.cpp", var_138, var_134)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
