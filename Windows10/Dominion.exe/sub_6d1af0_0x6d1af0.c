// 函数: sub_6d1af0
// 地址: 0x6d1af0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(arg1 + 4) = arg2
*(arg1 + 8) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = 0
int32_t eax
uint32_t eax_1
int32_t edx
eax_1, edx = sub_6d18c0(eax, arg2, arg2, "cmap")
uint32_t edi = eax_1
uint32_t var_10 = edi
uint32_t eax_2
int32_t edx_1
eax_2, edx_1 = sub_6d18c0(eax_1, edx, arg2, "loca")
*(arg1 + 0x10) = eax_2
uint32_t eax_3
int32_t edx_2
eax_3, edx_2 = sub_6d18c0(eax_2, edx_1, arg2, "head")
uint32_t var_18 = eax_3
*(arg1 + 0x14) = eax_3
uint32_t eax_4
int32_t edx_3
eax_4, edx_3 = sub_6d18c0(eax_3, edx_2, arg2, "glyf")
uint32_t var_8 = eax_4
*(arg1 + 0x18) = eax_4
uint32_t eax_5
int32_t edx_4
eax_5, edx_4 = sub_6d18c0(eax_4, edx_3, arg2, "hhea")
uint32_t var_14 = eax_5
*(arg1 + 0x1c) = eax_5
uint32_t eax_6
int32_t edx_5
eax_6, edx_5 = sub_6d18c0(eax_5, edx_4, arg2, "hmtx")
uint32_t var_c = eax_6
*(arg1 + 0x20) = eax_6
uint32_t eax_7
int32_t edx_6
eax_7, edx_6 = sub_6d18c0(eax_6, edx_5, arg2, "kern")
*(arg1 + 0x24) = eax_7
uint32_t eax_8
int32_t edx_7
eax_8, edx_7 = sub_6d18c0(eax_7, edx_6, arg2, "GPOS")
*(arg1 + 0x28) = eax_8

if (edi != 0 && var_18 != 0 && var_14 != 0 && var_c != 0)
    if (var_8 == 0)
        var_14 = 2
        var_c = 0
        var_18 = 0
        var_8 = 0
        uint32_t eax_10 = sub_6d18c0(eax_8, edx_7, arg2, "CFF ")
        
        if (eax_10 != 0)
            __builtin_memset(arg1 + 0x68, 0, 0x18)
            *(arg1 + 0x38) = eax_10 + arg2
            *(arg1 + 0x3c) = 0
            *(arg1 + 0x40) = 0x20000000
            uint32_t edx_8 = *(arg1 + 0x40)
            int64_t var_28 = *(arg1 + 0x38)
            uint32_t var_20_1 = edx_8
            char* eax_12
            
            if (&var_28:4.d[2] s> edx_8 || &var_28:4.d[2] s< 0 || &var_28:4.d[2] s>= edx_8)
                eax_12.b = 0
            else
                eax_12.b = *(var_28.d + &var_28:4.d[2])
            
            uint32_t eax_13 = zx.d(eax_12.b)
            
            if (eax_13 s<= edx_8)
                edx_8 = eax_13
            
            var_28:4.d = edx_8
            int64_t var_40
            int64_t* eax_16
            void* ecx_12
            int32_t edx_10
            eax_16, ecx_12, edx_10 =
                sub_6d13e0(&var_40, sub_6d13e0(&var_40, edx_8, &var_28, &var_40), &var_28, &var_40)
            void* var_64_1 = ecx_12
            var_64_1.q = *eax_16
            int32_t var_5c_2 = eax_16[1].d
            int64_t* eax_19
            int32_t edx_11
            eax_19, edx_11 = sub_6d17c0(&var_40, edx_10, 0, &var_40, var_64_1)
            int32_t eax_20 = eax_19[1].d
            int64_t var_34 = *eax_19
            int64_t* eax_23 =
                sub_6d13e0(&var_40, sub_6d13e0(&var_40, edx_11, &var_28, &var_40), &var_28, &var_40)
            int32_t eax_24 = eax_23[1].d
            *(arg1 + 0x50) = *eax_23
            *(arg1 + 0x58) = eax_24
            void var_4c
            int64_t* eax_26 = sub_6d1670(&var_4c, 0x11, &var_34, &var_4c)
            int32_t edi_1 = 0
            int32_t i = eax_26[1].d
            var_40 = *eax_26
            int32_t i_5 = i
            
            for (; var_40:4.d s< i; i = i_5)
                (&var_c)[edi_1] = sub_6d14d0(&var_40)
                edi_1 += 1
                
                if (edi_1 s>= 1)
                    break
            
            int64_t* eax_29 = sub_6d1670(&var_4c, 0x106, &var_34, &var_4c)
            int32_t edi_2 = 0
            int32_t i_1 = eax_29[1].d
            var_40 = *eax_29
            int32_t i_6 = i_1
            
            for (; var_40:4.d s< i_1; i_1 = i_6)
                (&var_14)[edi_2] = sub_6d14d0(&var_40)
                edi_2 += 1
                
                if (edi_2 s>= 1)
                    break
            
            int64_t* eax_32 = sub_6d1670(&var_4c, 0x124, &var_34, &var_4c)
            int32_t edi_3 = 0
            int32_t i_2 = eax_32[1].d
            var_40 = *eax_32
            int32_t i_7 = i_2
            
            for (; var_40:4.d s< i_2; i_2 = i_7)
                (&var_18)[edi_3] = sub_6d14d0(&var_40)
                edi_3 += 1
                
                if (edi_3 s>= 1)
                    break
            
            int64_t* eax_35 = sub_6d1670(&var_4c, 0x125, &var_34, &var_4c)
            int32_t edi_4 = 0
            int32_t i_3 = eax_35[1].d
            var_40 = *eax_35
            int32_t i_8 = i_3
            
            for (; var_40:4.d s< i_3; i_3 = i_8)
                (&var_8)[edi_4] = sub_6d14d0(&var_40)
                edi_4 += 1
                
                if (edi_4 s>= 1)
                    break
            
            uint32_t edi_5 = var_20_1
            var_64_1.q = var_34
            int32_t var_5c_6 = eax_20
            int64_t* var_70_1
            var_70_1.q = var_28
            uint32_t var_68_2 = edi_5
            int32_t* eax_38
            uint32_t edx_13
            eax_38, edx_13 = sub_6d1980(&var_4c, var_70_1)
            bool cond:0_1 = var_14 != 2
            int32_t eax_39 = eax_38[2]
            *(arg1 + 0x5c) = *eax_38
            *(arg1 + 0x64) = eax_39
            
            if (not(cond:0_1))
                uint32_t eax_40 = var_c
                
                if (eax_40 != 0)
                    uint32_t ecx_23 = var_18
                    
                    if (ecx_23 == 0)
                    label_6d1ec6:
                        
                        if (eax_40 s<= edi_5)
                            var_28:4.d = eax_40
                        
                        if (eax_40 s> edi_5 || eax_40 s< 0)
                            var_28:4.d = edi_5
                        
                        int64_t* eax_48
                        eax_48, edx_7 = sub_6d13e0(&var_4c, edx_13, &var_28, &var_4c)
                        edi = var_10
                        eax_8 = eax_48[1].d
                        *(arg1 + 0x44) = *eax_48
                        *(arg1 + 0x4c) = eax_8
                    label_6d1efa:
                        uint32_t eax_49 = sub_6d18c0(eax_8, edx_7, arg2, "maxp")
                        uint32_t ecx_30
                        
                        if (eax_49 == 0)
                            ecx_30 = 0xffff
                        else
                            ecx_30 = (zx.d(*(eax_49 + arg2 + 4)) << 8) + zx.d(*(eax_49 + arg2 + 5))
                        
                        void* edx_15 = edi + arg2
                        *(arg1 + 0xc) = ecx_30
                        *(arg1 + 0x2c) = 0xffffffff
                        uint32_t eax_51 = zx.d(*(edx_15 + 3))
                        uint32_t edi_7 = zx.d(*(edx_15 + 2)) << 8
                        *(arg1 + 0x30) = 0
                        uint32_t i_9 = edi_7 + eax_51
                        
                        if (edi_7 != neg.d(eax_51))
                            void* eax_52 = edx_15 + 9
                            uint32_t i_4
                            
                            do
                                uint32_t ecx_31 = zx.d(*(eax_52 - 4))
                                uint32_t edx_17 = zx.d(*(eax_52 - 5)) << 8
                                
                                if (ecx_31 == neg.d(edx_17))
                                    *(arg1 + 0x30) = zx.d(*(eax_52 + 2)) + (((((zx.d(*(eax_52 - 1))
                                        << 8) + zx.d(*eax_52)) << 8) + zx.d(*(eax_52 + 1))) << 8)
                                        + var_10
                                else if (ecx_31 + edx_17 == 3)
                                    uint32_t edx_20 =
                                        (zx.d(*(eax_52 - 3)) << 8) + zx.d(*(eax_52 - 2))
                                    
                                    if (edx_20 == 1 || edx_20 == 0xa)
                                        *(arg1 + 0x30) = zx.d(*(eax_52 + 2)) + (((((
                                            zx.d(*(eax_52 - 1)) << 8) + zx.d(*eax_52)) << 8)
                                            + zx.d(*(eax_52 + 1))) << 8) + var_10
                                
                                eax_52 += 8
                                i_4 = i_9
                                i_9 -= 1
                            while (i_4 != 1)
                        
                        if (*(arg1 + 0x30) != 0)
                            int32_t eax_53 = *(arg1 + 0x14)
                            *(arg1 + 0x34) =
                                (zx.d(*(eax_53 + arg2 + 0x32)) << 8) + zx.d(*(eax_53 + arg2 + 0x33))
                            return 1
                    else if (var_8 != 0)
                        if (ecx_23 s<= edi_5)
                            var_28:4.d = ecx_23
                        
                        if (ecx_23 s> edi_5 || ecx_23 s< 0)
                            var_28:4.d = edi_5
                        
                        int64_t* eax_42 = sub_6d13e0(&var_4c, edx_13, &var_28, &var_4c)
                        edi_5 = var_20_1
                        uint32_t ecx_25 = var_8
                        edx_13 = edi_5 - ecx_25
                        var_40.d = 0
                        int32_t eax_43 = eax_42[1].d
                        *(arg1 + 0x68) = *eax_42
                        *(arg1 + 0x70) = eax_43
                        uint32_t eax_44 = 0
                        var_40:4.d = 0
                        
                        if (ecx_25 s>= 0 && edx_13 s>= 0 && ecx_25 s<= edi_5)
                            var_40.d = var_28.d + ecx_25
                            eax_44 = edx_13
                        
                        *(arg1 + 0x74) = var_40
                        *(arg1 + 0x7c) = eax_44
                        eax_40 = var_c
                        goto label_6d1ec6
    else if (eax_2 != 0)
        goto label_6d1efa

return 0
