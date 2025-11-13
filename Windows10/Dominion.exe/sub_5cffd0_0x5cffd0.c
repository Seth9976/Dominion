// 函数: sub_5cffd0
// 地址: 0x5cffd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_2 = ebp
uint32_t ecx = __chkstk(0x1258)
__security_cookie
int32_t edi
int32_t var_18 = edi
sub_5cbb20(ecx)
sub_5ee260(0x11)
int128_t arg_c8
sub_6883d0(data_171e780, &arg_c8)
sub_688660(&arg_c8, ecx, edi)
int32_t var_20
char const* const var_1c_1
int32_t eax_3
char* ecx_3
uint32_t arg_4
uint32_t edi_1

if (*(ecx + 0x2c) != 1)
    edi_1 = sub_637730(&data_b809e0)
    arg_4 = edi_1
    *(edi_1 + 0x2c) = 1
    int32_t eax_5
    int32_t edx_2
    eax_5, edx_2 = sub_5cbb20(ecx)
    *(edi_1 + 0x170) = eax_5
    *(edi_1 + 0x178) = *(ecx + 0x1c28)
    int32_t ecx_6 = *(edi_1 + 0x1c28)
    *(edi_1 + 0x174) = 0
    *(ecx + 0x1b8c) = ecx_6
    uint32_t arg_18
    int128_t* eax_7 = sub_5de520(&arg_18, edx_2, ecx, &arg_18)
    arg_c8 = *eax_7
    int128_t arg_d8 = eax_7[1]
    eax_3 = sub_5cb6e0(edi_1 + 0x258, &arg_c8)
label_5d00d4:
    
    if (edi_1 != 0)
        void* eax_10 = sub_571b30(sub_5cbb20(ecx), sub_5cf7e0())
        int128_t* ecx_13 = (*(eax_10 + 0x98) & 0x7f000400) | (*(eax_10 + 0x9c) & 0x940)
        int32_t eax_13 = 0x21
        
        if (ecx_13 != 0)
            eax_13 = 0x22
        
        int32_t arg_9d8[0x2]
        arg_9d8[0] = eax_13
        int32_t arg_9e0 = 0xffffffff
        int32_t arg_9e4 = 0xffffffff
        int128_t arg_128 = arg_9d8.o
        int128_t arg_138 = arg6
        int128_t arg_148 = arg7
        int128_t arg_158 = arg8
        int128_t arg_168 = arg9
        int128_t arg_178 = arg10
        int64_t arg_20 = 0
        arg_18 = edi_1
        int32_t arg_1c = 2
        int128_t* var_1c_3 = &arg_128
        arg_c8 = arg_18.o
        int32_t arg_2c = 0
        arg_d8.q = 0.q
        sub_5cb7c0(&arg_128, &arg_c8, edi_1 + 0x258, ecx_13)
        int32_t edx_6 = data_b809e4
        void* i_1 = data_b809e0
        void* i = i_1
        data_b7f4c0 = 0
        void* ecx_16 = edx_6 * 0x1c30 + i
        
        if (i u>= ecx_16)
        label_5d0235:
            i = 0xffffffff
        else
            while ((*(i + 0x1c28) & 0xffff0000) == 0)
                i += 0x1c30
                
                if (i u>= ecx_16)
                    goto label_5d0235
        
        void* i_4 = i
        
        if (i != 0xffffffff)
            do
                int32_t ecx_17 = *(i + 0x2c)
                
                if ((ecx_17 == 2 || ecx_17 == 1) && i != edi_1)
                    sub_5cb5a0(i)
                
                ecx_16 = sub_6376d0(&data_b809e0, &i_4)
                i = i_4
            while (i != 0xffffffff)
            
            edx_6 = data_b809e4
            i_1 = data_b809e0
        
        void* eax_16 = edx_6 * 0x1c30 + i_1
        
        if (i_1 u>= eax_16)
        label_5d02a6:
            i_1 = 0xffffffff
        else
            while ((*(i_1 + 0x1c28) & 0xffff0000) == 0)
                i_1 += 0x1c30
                
                if (i_1 u>= eax_16)
                    goto label_5d02a6
        
        i_4 = i_1
        
        if (i_1 != 0xffffffff)
            do
                if (*(i_1 + 0x2c) == 7)
                    void* eax_17 = sub_633270(i_1)
                    
                    if (eax_17 == ecx)
                        sub_5cd880(i_1, eax_17)
                        sub_5cb5a0(i_1)
                
                ecx_16 = sub_6376d0(&data_b809e0, &i_4)
                i_1 = i_4
            while (i_1 != 0xffffffff)
            
            edi_1 = arg_4
        
        uint32_t esi_3 = ecx
        void* var_1c_6 = ecx_16
        __return_addr = nullptr
        data_b7d42c = *(esi_3 + 0x1c28)
        data_b7d434 = *(edi_1 + 0x1c28)
        data_b7d430 = *(edi_1 + 0x170)
        data_b7d424 = 1
        int32_t* var_24 = &arg_9d8
        data_b7f4c4 = 0
        data_b7f4c8 = 0
        data_b7d41c = 0x3f800000
        data_b7d420 = 0x3f800000
        int32_t arg_a40[0x201]
        int32_t eax_22 = sub_5cfdf0(&arg_9d8, &arg_a40, esi_3, ecx_16, var_24)
        int32_t arg_10 = 0
        int32_t arg_40
        int128_t arg_48
        int128_t arg_58
        int128_t arg_68
        int128_t arg_78
        int128_t arg_88
        int128_t arg_98
        
        if (*(esi_3 + 0x2c) == 3 && *(esi_3 + 0x70) == 0)
            int32_t eax_23 = sub_5cbb20(esi_3)
            uint32_t eax_24 = sub_637730(&data_b809e0)
            int128_t xmm1_1 = arg_d8
            arg_c8.d = 0x25
            arg_c8:8.d = 0xffffffff
            arg_c8:0xc.d = 0xffffffff
            arg_128 = arg_c8
            arg_20 = 0
            arg_18 = eax_24
            arg_1c = 2
            arg_c8 = arg_18.o
            arg_2c = 0
            arg_128:0xc.d = 0
            arg_d8.q = 0.q
            int128_t xmm0_14 = arg_128
            *(eax_24 + 0x250) = eax_23
            arg_58 = xmm1_1
            arg_40 = 1
            arg_48 = xmm0_14
            arg_68 = arg1
            *(eax_24 + 0x2c) = 2
            arg_78 = arg2
            *(eax_24 + 0x24c) = 0
            arg_88 = arg3
            arg_10 = 1
            arg_98 = arg4
            esi_3 = __builtin_memcpy(&arg_128, &arg_40, 0x88)
            sub_6372f0(eax_24 + 0x258, &arg_128, 6, 1, &arg_c8)
            data_b7f4cc = *(eax_24 + 0x1c28)
        
        uint32_t eax_26 = 0
        uint32_t arg_14 = 0
        
        if (eax_22 s> 0)
            do
                void* esi_4 = arg_a40[eax_26]
                uint32_t eax_27 = sub_637730(&data_b809e0)
                uint32_t* var_1c_8 = &arg_18
                *(eax_27 + 0x2c) = 2
                *(eax_27 + 0x24c) = *(esi_4 + 0x1c28)
                int32_t edx_10 = *(eax_27 + 0x1c28)
                *(esi_4 + 0x1b8c) = edx_10
                int128_t* eax_29 = sub_5de520(&arg_18, edx_10, esi_4, var_1c_8)
                arg_c8 = *eax_29
                int128_t xmm0_16 = eax_29[1]
                sub_5cb6e0(eax_27 + 0x258, &arg_c8)
                arg_c8.d = 0x25
                arg_c8:8.d = 0xffffffff
                arg_c8:0xc.d = 0xffffffff
                arg_128 = arg_c8
                arg_20 = 0
                arg_18 = eax_27
                arg_1c = 2
                arg_128:0xc.d = arg_10
                arg_c8 = arg_18.o
                arg_2c = 0
                arg_d8.q = 0.q
                arg_10 += 1
                int128_t* var_1c_9 = &arg_c8
                arg_48 = arg_128
                arg_40 = 1
                arg_58 = xmm0_16
                int32_t var_20_3 = 1
                arg_68 = arg1
                int32_t var_24_2 = 6
                arg_78 = arg2
                int32_t* var_28_2 = &arg_128
                arg_88 = arg3
                arg_98 = arg4
                __builtin_memcpy(&arg_128, &arg_40, 0x88)
                esi_3 = eax_27
                sub_6372f0(esi_3 + 0x258, var_28_2, var_24_2, var_20_3, var_1c_9)
                (&data_b7f4c8)[arg_10] = *(esi_3 + 0x1c28)
                eax_26 = arg_14 + 1
                arg_14 = eax_26
            while (eax_26 s< eax_22)
        
        int32_t edx_12 = 0
        
        if (__return_addr s> 0)
            esi_3 = arg_4
            
            do
                void* ecx_32 = arg_9d8[edx_12]
                edx_12 += 1
                *(ecx_32 + 0x1b90) = *(esi_3 + 0x1c28)
            while (edx_12 s< __return_addr)
        
        void arg_1c0
        void* var_1c_10 = &arg_1c0
        data_b7f4bc = 0
        data_b7f4b8 = 0
        sub_5cec70(&arg_1c0, ecx, 0xb80ad8, var_1c_10)
        int32_t edx_14 = 0
        int32_t var_4_1 = 0
        
        if (arg5 s> 0)
            void* __return_addr_1 = data_b7f4b8
            void arg_5c0
            void* edi_5 = &arg_5c0
            __return_addr = __return_addr_1
            
            do
                data_b7f4bc += 1
                esi_3 = 0
                int32_t eax_36 = *edi_5
                
                if (eax_36 s> 0)
                    void* ecx_33 = __return_addr_1 + 0xb7d440
                    void* edx_15 = edi_5 - 0x400
                    
                    do
                        *(ecx_33 + 4) = 0
                        edx_15 += 4
                        ecx_33 += 0xc
                        *(ecx_33 - 0xc) = *(edx_15 - 4)
                        esi_3 += 1
                        eax_36 = *edi_5
                    while (esi_3 s< eax_36)
                    
                    __return_addr_1 = __return_addr
                    edx_14 = var_4_1
                
                *(__return_addr_1 + &data_b7d438) = eax_36
                edx_14 += 1
                int32_t eax_38 = *(edi_5 + 4)
                edi_5 += 0x408
                *(__return_addr_1 + 0xb7d43c) = eax_38
                int32_t ecx_34 = data_b7f4b8
                var_4_1 = edx_14
                __return_addr_1 = ecx_34 + *(ecx_34 + &data_b7d438) * 0xc + 8
                __return_addr = __return_addr_1
                data_b7f4b8 = __return_addr_1
            while (edx_14 s< arg5)
        
        sub_5cf520(esi_3, &data_b7d438)
        int32_t edi_6 = data_b7f4b8
        void* result = nullptr
        void* i_2 = &data_b7d438
        
        if (edi_6 == 0)
            i_2 = nullptr
        
        void* i_3 = i_2
        
        if (i_2 != 0)
            int32_t esi_5 = 0
            int32_t var_8_1 = 0
            
            do
                int32_t edx_18 = *i_2
                arg_4 = 0
                
                if (edx_18 s> 0)
                    void* __return_addr_2 = i_2 + 0x10
                    __return_addr = __return_addr_2
                    uint32_t eax_45
                    
                    do
                        int32_t esi_6 = *(__return_addr_2 - 8)
                        uint32_t eax_41 = sub_637730(&data_b809e0)
                        arg_9d8[0] = 0x23
                        arg_9e0 = 0xffffffff
                        arg_9e4 = 0xffffffff
                        arg_128 = arg_9d8.o
                        *(eax_41 + 0x170) = esi_6
                        arg_20 = 0
                        arg_18 = eax_41
                        arg_1c = 2
                        int128_t xmm0_22 = arg_18.o
                        *(eax_41 + 0x17c) = arg_4
                        arg_128:0xc.d = var_8_1 | arg_4
                        arg_c8 = xmm0_22
                        *(eax_41 + 0x2c) = 1
                        *(eax_41 + 0x174) = 1
                        *(eax_41 + 0x178) = *__return_addr_2
                        arg_2c = 0
                        int32_t* var_1c_12 = &arg_c8
                        *(__return_addr_2 - 4) = *(eax_41 + 0x1c28)
                        arg_d8.q = 0.q
                        int128_t xmm0_24 = arg_128
                        int32_t var_20_4 = 1
                        arg_58 = arg6
                        arg_40 = 1
                        arg_48 = xmm0_24
                        int32_t var_24_3 = 6
                        arg_68 = arg7
                        int32_t* var_28_3 = &arg_128
                        arg_78 = arg8
                        arg_88 = arg9
                        arg_98 = arg10
                        __builtin_memcpy(&arg_128, &arg_40, 0x88)
                        sub_6372f0(eax_41 + 0x258, var_28_3, var_24_3, var_20_4, var_1c_12)
                        i_2 = i_3
                        eax_45 = arg_4 + 1
                        __return_addr_2 = __return_addr + 0xc
                        arg_4 = eax_45
                        edx_18 = *i_2
                        __return_addr = __return_addr_2
                    while (eax_45 s< edx_18)
                    edi_6 = data_b7f4b8
                    esi_5 = var_8_1
                
                i_2 = i_2 + edx_18 * 0xc + 8
                result = edi_6 + &data_b7d438
                i_3 = i_2
                
                if (i_2 == result)
                    break
                
                esi_5 += 0x10000
                var_8_1 = esi_5
            while (i_2 != 0)
        
        CookieCheckFunction(result)
        return result
    
    var_1c_1 = "DomZoom"
    var_20 = 0x16e7
    ecx_3 = "pZoomCard"
else
    eax_3 = data_b7d424
    
    if (eax_3 == 4 || eax_3 == 1)
        edi_1 = ecx
        arg_4 = edi_1
        goto label_5d00d4
    
    var_1c_1 = "DomZoom"
    var_20 = 0x16e0
    ecx_3 = "zoom.zoomState == ZOOMSTATE_EXTRAS_SELECTED || zoom.zoomState == ZOOMSTATE_CARD"
sub_63b870(eax_3, &data_801800, ecx_3, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_20, 
    var_1c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
