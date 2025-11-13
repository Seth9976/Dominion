// 函数: _Z17TryReplayCampaignRK4Dateb
// 地址: 0xb3de60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetClient()

for (Date* i = *(*(result + 0x75e8) + ((((0xffff00ff & zx.q(*arg1 << 0x10))
        | zx.q(zx.d((*(arg1 + 4)).b) << 8) | zx.q(*(arg1 + 8))) & zx.q(*(result + 0x75f0))) << 3)); 
        i != 0; i = *(i + 0x28))
    result = operator!=(arg1, i)
    
    if ((result.d & 1) == 0)
        int32_t x23_1 = *(i + 0x20)
        int32_t* var_50f0
        int32_t x0_2 = DomGetExpansions(&var_50f0)
        int32_t var_d0[0x20]
        int32_t x22_1
        
        if (x0_2 s< 1)
            x22_1 = 0
        else
            int64_t j = 0
            x22_1 = 0
            
            do
                uint64_t x0_3 = zx.q(*(var_50f0 + j))
                bool z_1
                
                if (x0_3.d s<= x23_1)
                    z_1 = x0_3.d == 0x13
                else
                    z_1 = true
                
                if (not(z_1) && (ProfileHasEntitlementForExpansion(x0_3, nullptr) & 1) == 0)
                    var_d0[sx.q(x22_1)] = *(var_50f0 + j)
                    x22_1 += 1
                
                j += 0x28
            while (mulu.dp.d(x0_2, 0x28) != j)
        
        Date* x23_2 = GetClient() + 0x75f8
        int32_t* x0_9
        int32_t x1_3
        x0_9, x1_3 = DateAdd_Day(x23_2, neg.d(GetDayOfTheWeek(*(x23_2 + 8), *(x23_2 + 4), *x23_2)))
        var_50f0 = x0_9
        int32_t var_50e8_1 = x1_3
        int32_t x0_11 = operator==(arg1, &var_50f0)
        void* x0_12 = GetActiveProfile()
        int32_t j_1 = *(i + 0x10)
        int32_t* x9_4 =
            *(*(x0_12 + 0x7750) + (((zx.q(j_1) | zx.q(j_1 s>> 4)) & zx.q(*(x0_12 + 0x7758))) << 3))
        int32_t x8_8
        
        if (x9_4 == 0)
        label_b3dfbc:
            x8_8 = 1
            
            if (x22_1 != 0)
            label_b3dfdc:
                
                if ((x0_11 & x8_8) == 0)
                    int32_t x0_14 = DomExpansionsBitsetFromExpansions(&var_d0, x22_1)
                    int32_t x8_11
                    
                    if ((arg2.d & 1) != 0)
                        x8_11 = 0
                    else
                        x8_11 = 2
                    
                    *gMissingContent = x0_14
                    *(gMissingContent + 4) = 0
                    *(gMissingContent + 8) = x8_11
                    return GameDlgManagerShow(0x7f5, 5)
        else
            while (j_1 != *x9_4)
                x9_4 = *(x9_4 + 0x98)
                
                if (x9_4 == 0)
                    goto label_b3dfbc
            
            x8_8 = (zx.d(x9_4[7].b) & 2) == 0 ? 1 : 0
            
            if (x22_1 != 0)
                goto label_b3dfdc
        result = FromCampaignString(&var_50f0, i + 0x18)
        
        if ((result.d & 1) == 0)
            break
        
        void* x0_16 = GetActiveProfile()
        uint64_t x2_2 = zx.q(*(i + 0x10))
        
        for (int32_t* j_2 = *(*(x0_16 + 0x7750)
                + (((zx.q(x2_2.d) | zx.q(x2_2.d s>> 4)) & zx.q(*(x0_16 + 0x7758))) << 3)); j_2 != 0; 
                j_2 = *(j_2 + 0x98))
            if (x2_2.d == *j_2)
                return CampaignDialogWeeklyOpen(&var_50f0, arg1, x2_2)
        
        int128_t var_5190
        __builtin_memset(&var_5190, 0, 0x94)
        int128_t var_5180
        CampaignClear(&var_5180:4)
        int32_t var_5178_1 = 4
        void* x0_18
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        x0_18, v0_1, v1_1, v2_1, v3_1 = GetActiveProfile()
        int32_t j_3 = *(i + 0x10)
        uint64_t x23_4 = (zx.q(j_3) | zx.q(j_3 s>> 4)) & zx.q(*(x0_18 + 0x7758))
        int32_t* x8_15 = *(*(x0_18 + 0x7750) + (x23_4 << 3))
        
        if (x8_15 == 0)
        label_b3e0d8:
            int32_t* x0_19
            int128_t v0_2
            int128_t v1_2
            int128_t v2_2
            int128_t v3_2
            x0_19, v0_2, v1_2, v2_2, v3_2 = XPooledMalloc(0xa0)
            uint64_t x9_7 = x23_4 << 3
            *x0_19 = *(i + 0x10)
            __builtin_memset(&x0_19[9], 0, 0x74)
            *(x0_19 + 0x14) = var_5180
            *(x0_19 + 4) = zx.o(0)
            *(x0_19 + 0x98) = *(*(x0_18 + 0x7750) + x9_7)
            *(*(x0_18 + 0x7750) + x9_7) = x0_19
            *(x0_18 + 0x775c) += 1
        else
            while (j_3 != *x8_15)
                x8_15 = *(x8_15 + 0x98)
                
                if (x8_15 == 0)
                    goto label_b3e0d8
            
            *(x8_15 + 0x14) = var_5180
            *(x8_15 + 4) = zx.o(0)
            __builtin_memset(&x8_15[9], 0, 0x74)
        
        return CampaignDialogWeeklyOpen(&var_50f0, arg1, zx.q(*(i + 0x10)))

return result
