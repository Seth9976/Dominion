// 函数: sub_67b3b0
// 地址: 0x67b3b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_18 = arg2
char var_11 = 0
char var_2c = 0

if (arg4 != 1)
    int32_t eax = data_c23bec
    
    if (eax != 0)
        if (arg2 == 0)
            goto label_67b41d
        
        if (arg2 != eax)
            uint32_t eax_1
            eax_1, arg2 = sub_64e7a0(arg2)
            void* ecx_1 = *(eax_1 + 0x1718)
            char eax_2
            
            if (ecx_1 != 0)
                arg2.b = 0
                eax_2, arg2 = sub_67ad00(*(ecx_1 + 0x18c8), arg2.b)
            
            if (ecx_1 == 0 || eax_2 == 0)
                eax = data_c23bec
            label_67b41d:
                arg2.b = 0
                var_11 = 0
                
                if (eax != 0)
                    uint32_t ecx_3 = zx.d(eax.w)
                    
                    if (ecx_3 u< data_c23bac)
                        void* ecx_5 = ecx_3 * 0x18d0 + data_c23ba8
                        
                        if (*(ecx_5 + 0x18c8) == eax && ecx_5 != 0)
                            *(ecx_5 + 0x13c1) = 0
                            arg2.b = *(ecx_5 + 0x15bd)
                            var_11 = arg2.b
                    
                    data_c23bec = 0
                
                var_2c = arg2.b

int32_t ecx_6 = data_c23be4
void* eax_5
int32_t edx

if (ecx_6 == 0)
    eax_5 = arg4
    edx = var_18
else
    uint32_t eax_3 = sub_64e7a0(ecx_6)
    
    if (*(eax_3 + 0x1388) == 0)
        eax_5 = arg4
        edx = var_18
    else if (*(arg3 + 4) == 0)
        data_c23be4 = 0
        *(eax_3 + 0x1388) = 0
        eax_5 = arg4
        edx = var_18
    else
        edx = data_c23be4
        eax_5 = arg4 | 8
        var_18 = edx
        arg4 = eax_5

if (eax_5 == 0x10 || eax_5 == 0x40 || eax_5 == 0x80 || eax_5 == 0x20 || eax_5 == 0x100
        || eax_5 == 0x200)
    int32_t ecx_48 = data_c23be8
    
    if (ecx_48 != 0)
        int32_t var_98 = 0
        int64_t var_90_1 = 0
        int64_t var_88_1 = 0
        int32_t* eax_37 = sub_64e7a0(ecx_48)
        int32_t eax_38 = eax_37[0x563]
        
        if (eax_38 == 0)
            char* eax_39 = eax_37[0x578]
            char* const ecx_49 = &data_801800
            
            if (eax_39 != 0)
                ecx_49 = eax_39
            
            char* const var_94_2 = ecx_49
        else
            int32_t var_94_1 = eax_38
        
        int32_t eax_41
        
        if ((arg4.b & 0x10) != 0)
            eax_41 = 2
        else if (arg4.b s< 0)
            eax_41 = 4
        else if ((arg4.b & 0x40) != 0)
            eax_41 = 3
        else if ((arg4.b & 0x20) != 0)
            eax_41 = 5
        else if ((arg4 & 0x100) == 0)
            if ((arg4 & 0x200) == 0)
                sub_63b870(arg4, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x58a5, 
                    "ActionToClickStyle")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            eax_41 = 9
        else
            eax_41 = 6
        
        int32_t var_80_1 = eax_41
        int32_t var_7c_1 = arg5
        sub_67ad40(arg5, &var_98, eax_37, 1, 0)
        eax_5.b = 1
        return eax_5
else
    void* ecx_8 = eax_5 & 6
    char ecx_11 = (eax_5 u>> 3).b & 1
    int32_t* esi_1
    
    if (edx != 0)
        uint32_t esi_2 = zx.d(edx.w)
        
        if (esi_2 u< data_c23bac)
            esi_1 = esi_2 * 0x18d0 + data_c23ba8
            
            if (esi_1[0x632] != edx)
                esi_1 = nullptr
        else
            esi_1 = nullptr
    else
        esi_1 = nullptr
    
    if ((ecx_11 != 0 || ecx_8 != 0) && *(arg3 + 0x325) != 0 && edx != data_c23be0
            && (esi_1 == 0 || *(esi_1 + 0x1597) == 0))
        int32_t eax_6 = data_c23be0
        
        if (eax_6 != 0)
            uint32_t ecx_12 = zx.d(eax_6.w)
            
            if (ecx_12 u< data_c23bac)
                void* ecx_14 = ecx_12 * 0x18d0 + data_c23ba8
                
                if (*(ecx_14 + 0x18c8) == eax_6 && ecx_14 != 0)
                    data_1777484 = 0
                    data_177748e = 0
                    *(ecx_14 + 0x172c) = *(ecx_14 + 0x1724)
                    *(ecx_14 + 0x1789) = 0
                    eax_6 = data_c23be0
        
        edx.b = 0
        sub_66ca90(eax_6, edx.b, eax_6, 1)
        eax_5 = arg4
        edx = var_18
    
    if (edx != 0 && esi_1 != 0)
        eax_5.b &= 1
        char var_19_1 = eax_5.b
        eax_5 = sub_67b310(esi_1)
        
        if (eax_5 != 0)
            if (*(arg3 + 0x325) == 0)
                int32_t ecx_19 = *(eax_5 + 0x1388)
                
                if (*(arg3 + 4) == 0)
                    *(eax_5 + 0x1388) = 0
                    
                    if (ecx_19 == 2)
                        eax_5.b = 1
                        return eax_5
                else if (ecx_19 != 0)
                    float xmm2_2 = *(arg3 + 0x310) f- *(eax_5 + 0x1380)
                    float xmm3_2 = *(arg3 + 0x314) f- *(eax_5 + 0x1384)
                    
                    if (ecx_19 != 1)
                        if (ecx_19 == 2)
                            goto label_67b705
                    else if (not(xmm3_2 * xmm3_2 + xmm2_2 * xmm2_2 <= 30f))
                        *(eax_5 + 0x1388) = 2
                    label_67b705:
                        int32_t eax_12 = *(arg3 + 0x310)
                        float xmm2_3 = xmm2_2 ^ (data_8937c0.o).d
                        int32_t xmm3_3 = xmm3_2 ^ (data_8937c0.o).d
                        *(eax_5 + 0x1384) = *(arg3 + 0x314)
                        *(eax_5 + 0x1380) = eax_12
                        float var_24 = xmm2_3
                        int32_t var_20_2 = xmm3_3
                        sub_67a8a0(eax_5, &var_24)
                        int32_t eax_13
                        eax_13.b = 1
                        return eax_13
            else
                *(eax_5 + 0x1388) = 1
                int32_t ecx_17 = *(arg3 + 0x314)
                *(eax_5 + 0x1380) = *(arg3 + 0x310)
                edx = var_18
                *(eax_5 + 0x1384) = ecx_17
        
        if (esi_1[0x57e] == 3 && esi_1[0x55a].b != 0)
            if (sub_655340(esi_1) != 0)
                int32_t eax_11 = esi_1[0x563]
                int64_t var_6c
                __builtin_memset(&var_6c, 0, 0x14)
                
                if (eax_11 == 0)
                    char* eax_14 = esi_1[0x578]
                    char* const ecx_22 = &data_801800
                    
                    if (eax_14 != 0)
                        ecx_22 = eax_14
                    
                    char* const var_74_2 = ecx_22
                else
                    int32_t var_74_1 = eax_11
                
                bool cond:3_1 = *(arg3 + 0x325) == 0
                int32_t var_78 = esi_1[0x632]
                eax_5 = esi_1[0x5ac]
                void* var_70_1 = eax_5
                
                if (not(cond:3_1) && ecx_8 != 0)
                    if (data_c23be0 != var_18)
                        int32_t var_a4_1 = var_18
                        eax_5 = sub_66cc40(var_18, arg3 + 0x310)
                    
                    sub_67ad40(eax_5, &var_78, esi_1, 1, 0)
                    uint32_t eax_16
                    eax_16.b = var_11
                    return eax_16
                
                if (*(arg3 + 4) == 0)
                    eax_5.b = var_11
                    return eax_5
                
                sub_6ea940(&esi_1[0x5c8], 1, arg3 + 0x310)
                int32_t eax_18
                eax_18.b = var_11
                return eax_18
            
            edx = var_18
        
        eax_5 = esi_1[0x53a]
        
        if (eax_5 == 2 || eax_5 == 1 || eax_5 == 3)
            if (*(arg3 + 0x325) != 0)
                if (data_c23be4 != edx)
                    data_c23be4 = edx
                
                esi_1[0x4e2] = 2
                int32_t ecx_45 = *(arg3 + 0x314)
                esi_1[0x4e0] = *(arg3 + 0x310)
                esi_1[0x4e1] = ecx_45
            else if (*(arg3 + 4) == 0)
                esi_1[0x4e2] = 0
            
            if (esi_1[0x4e2] != 2)
                eax_5.b = var_11
                return eax_5
            
            float xmm2_5 = *(arg3 + 0x310) f- esi_1[0x4e0]
            float xmm1_5 = *(arg3 + 0x314) f- esi_1[0x4e1]
            int32_t eax_36 = *(arg3 + 0x310)
            esi_1[0x4e1] = *(arg3 + 0x314)
            float xmm2_6 = xmm2_5 ^ (data_8937c0.o).d
            int32_t xmm1_6 = xmm1_5 ^ (data_8937c0.o).d
            esi_1[0x4e0] = eax_36
            float var_58 = xmm2_6
            int32_t var_54_1 = xmm1_6
            sub_67a8a0(esi_1, &var_58)
            eax_5.b = var_11
            return eax_5
        
        if (esi_1[0x57e] != 5 && (esi_1[0x568] == 0 || esi_1[0x56d] == 2))
            eax_5.b = var_11
            return eax_5
        
        bool cond:5_1
        
        if (data_c23bf8 != 1)
            if (sub_655340(esi_1).b != 0)
            label_67b86f:
                
                if (var_19_1 != 0)
                    void** eax_21 = (**(arg3 + 0x210))()
                    
                    if (eax_21 != sub_4ab040)
                        if (data_c23bf8 != 0)
                            goto label_67b900
                        
                        goto label_67b8b8
                    
                    eax_21 = eax_21(arg3 + 0x210, &data_7fedfc)
                    
                    if (eax_21.b != 0 || data_c23bf8 != 0)
                    label_67b900:
                        char* edx_9 = esi_1[0x564]
                        void** ecx_33 = esi_1
                        
                        if (edx_9 != 0)
                            eax_21 = sub_67b350(ecx_33, edx_9)
                            ecx_33 = esi_1
                            
                            if (eax_21 != 0)
                                ecx_33 = eax_21
                        
                        sub_665db0(eax_21, &data_c2143c, ecx_33, 0x3f800000, 0xfffffc18, 0)
                    else
                    label_67b8b8:
                        int32_t eax_24 = (**(arg3 + 0x110))()
                        
                        if (eax_24 == (**(arg3 + 0x210))()
                                && eax_24(arg3 + 0x110, arg3 + 0x210).b != 0)
                            void** edx_8 = &data_c21448
                            
                            if (*(arg3 + 4) != 0)
                                edx_8 = &data_c21454
                            
                            sub_665db0(&data_c21454, edx_8, esi_1, 0x3f800000, 0xfffffc18, 0)
                
                if (data_c23bf8 != 0)
                    eax_5.b = 1
                    return eax_5
                
                if (ecx_8 == 0 && (ecx_11 == 0 || esi_1[0x4e2] == 0))
                    eax_5.b = var_11
                    return eax_5
                
                int32_t eax_25 = esi_1[0x563]
                uint32_t var_40_1 = 0
                
                if (eax_25 == 0)
                    char* eax_26 = esi_1[0x578]
                    char* const ecx_34 = &data_801800
                    
                    if (eax_26 != 0)
                        ecx_34 = eax_26
                    
                    char* const var_48_2 = ecx_34
                else
                    int32_t var_48_1 = eax_25
                
                int32_t xmm0_3 = *(arg3 + 0x310)
                int32_t var_4c = esi_1[0x632]
                int32_t var_44_1 = esi_1[0x5ac]
                int32_t var_3c_1 = xmm0_3
                int32_t var_30_1 = arg5
                eax_5 = arg4
                int32_t var_38_1 = *(arg3 + 0x314)
                int32_t var_34_1 = 0
                
                if ((eax_5.b & 4) == 0)
                label_67b9ff:
                    
                    if (esi_1[0x4e2] == 2)
                        sub_665db0(eax_5, &data_c21454, esi_1, 0x3f800000, 0xfffffc18, 0)
                        int32_t eax_30
                        eax_30.b = *(arg3 + 4) != 0
                        int32_t var_40_2 = eax_30 + 5
                        sub_67ad40(eax_30 + 5, &var_4c, esi_1, 0, var_2c)
                        uint32_t eax_32
                        eax_32.b = 1
                        return eax_32
                    
                    if (*(arg3 + 0x325) != 0 && esi_1[0x565].b != 0)
                        eax_5 = sub_665db0(eax_5, &data_c21448, esi_1, 0x3f800000, 0xfffffc18, 0)
                        
                        if (data_c23be0 != var_18)
                            int32_t var_a4_4 = var_18
                            eax_5 = sub_66cc40(var_18, arg3 + 0x310)
                        
                        goto label_67bae7
                    
                    if (*(arg3 + 0x326) != 0)
                        if (*(esi_1 + 0x1596) != 0)
                        label_67babe:
                            
                            if (data_c23be0 != var_18)
                                int32_t var_a4_5 = var_18
                                eax_5 = sub_66cc40(var_18, arg3 + 0x310)
                            
                            int32_t var_40_3 = 2
                            int32_t var_34_3 = 1
                        label_67bae7:
                            sub_67ad40(eax_5, &var_4c, esi_1, 0, var_2c)
                            uint32_t eax_33
                            eax_33.b = 1
                            return eax_33
                        
                        if (esi_1[0x568] != 0)
                            int32_t ecx_39 = esi_1[0x56d]
                            
                            if (ecx_39 == 0 || ecx_39 == 1)
                                goto label_67babe
                    
                    if ((*(arg3 + 0x327) == 0 && *(arg3 + 0x328) == 0) || esi_1[0x565].b != 0)
                        if (eax_5 == 4)
                            goto label_67bae7
                        
                        eax_5.b = var_11
                        return eax_5
                    
                    uint32_t eax_34 =
                        sub_665db0(eax_5, &data_c21448, esi_1, 0x3f800000, 0xfffffc18, 0)
                    
                    if (*(arg3 + 0x329) == 0)
                        eax_34 = var_40_1
                        
                        if (*(arg3 + 0x328) != 0)
                            eax_34 = 3
                        
                        uint32_t var_40_5 = eax_34
                    else
                        int32_t var_40_4 = 4
                    
                    if (data_c23be0 != var_18 && *(esi_1 + 0x1597) == 0)
                        int32_t var_a4_7 = var_18
                        eax_34 = sub_66cc40(var_18, arg3 + 0x310)
                    
                    sub_67ad40(eax_34, &var_4c, esi_1, 1, 0)
                    uint32_t eax_35
                    eax_35.b = 1
                    return eax_35
                
                int32_t var_34_2 = 1
                
                if (eax_5 == 0xffffffff)
                    goto label_67b9ff
                
                if (esi_1[0x568] == 0)
                    if (*(esi_1 + 0x1595) != 0)
                        goto label_67b9ff
                else if (esi_1[0x56d] != 2 || *(esi_1 + 0x1595) != 0)
                    goto label_67b9ff
            else if (ecx_8 != 0 && esi_1[0x568] != 0)
                cond:5_1 = esi_1[0x56d] == 2
                goto label_67b858
        else
            cond:5_1 = sub_6553d0(esi_1).b == 0
        label_67b858:
            
            if (not(cond:5_1))
                goto label_67b86f

eax_5.b = 0
return eax_5
