// 函数: sub_57de10
// 地址: 0x57de10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = arg8
int32_t var_20_3
char const* const ecx_34

if (eax u> 0x1e)
    char const* const var_1c_24 = "CollectAbilities"
    var_20_3 = 0x2186
    ecx_34 = "Halt"
else
    switch (eax)
        case 0
            if (arg12 != 0)
                eax = sub_591930()
            
            sub_57d110(
                sub_57ce80(
                    sub_57d8c0(sub_57cbc0(eax, arg2, arg3, arg4, arg5, arg6, arg7, 1, 0, 0, 0), 
                        arg2, arg3, arg4, 0, 0, 0), 
                    arg2, arg3, arg4, 1, 0, 0, 0), 
                arg2, arg3, arg4, 1, 0)
            return sub_57d6f0(sub_57d1e0(arg3, arg4, 7, 0, 0, 0), arg2, arg3, arg4, 8, 0, 1, 0)
        case 1
            if (arg12 != 0)
                eax = sub_591930()
            
            sub_57ce80(sub_57cbc0(eax, arg2, arg3, arg4, arg5, arg6, arg7, 0x17, 0, 0, 0), arg2, 
                arg3, arg4, 0, 0, 0, 0)
            return sub_57d1e0(arg3, arg4, 3, 0, 0, 0)
        case 2
            if (arg12 != 0)
                eax = sub_591930()
            
            sub_57cbc0(
                sub_57d8c0(sub_57ce80(eax, arg2, arg3, arg4, 4, 0, 0, 0), arg2, arg3, arg4, 3, 0, 
                    0), 
                arg2, arg3, arg4, arg5, arg6, arg7, 0xc, 0, 0, 0)
            return sub_57d1e0(arg3, arg4, 0xe, 0, 0, 0)
        case 3
            sub_57d4c0(sub_57cbc0(eax, arg2, arg3, arg4, arg5, arg6, arg7, 0, 0, 0, 0), arg2, arg3, 
                arg4, 4, 0)
            return sub_57d1e0(arg3, arg4, 0xd, 0, 0, 0)
        case 4
            if (arg12 != 0)
                eax = sub_591930()
            
            sub_57cbc0(eax, arg2, arg3, arg4, arg5, arg6, arg7, 2, 0, 0, 0)
            return sub_57d330(sub_57d1e0(arg3, arg4, 6, 0, 0, 0), arg2, arg3, arg4, 1, 0)
        case 5
            uint32_t ecx_60 = 0
            arg8 = 0
            
            if (arg12 s<= 0)
                return eax
            
            do
                eax.b = ecx_60 == 0
                uint32_t eax_56 = zx.d(eax.b)
                sub_57d6f0(eax_56, arg2, arg3, arg4, 4, arg11[ecx_60], eax_56.b, arg9)
                sub_57ce80(arg8, arg2, arg3, arg4, 5, arg11[arg8], 0, 0)
                sub_57cbc0(arg8, arg2, arg3, arg4, arg5, arg6, arg7, 0xb, arg11[arg8], 0, 0)
                sub_57d1e0(arg3, arg4, 2, arg11[arg8], 0, arg9)
                sub_57cd60(arg8, arg2, arg3, arg4, 2, arg11[arg8], 0, arg9)
                sub_57d330(arg8, arg2, arg3, arg4, 0, arg11[arg8])
                eax = sub_57ca30(arg8, arg2, arg3, arg4, arg5, arg6, 0x16, arg11[arg8], 0, 0)
                ecx_60 = arg8 + 1
                arg8 = ecx_60
            while (ecx_60 s< arg12)
            
            return eax
        case 6
            char edx_28 = arg10.b
            uint32_t ecx_28 = arg4
            uint32_t edx_36
            int32_t* edi_9
            
            if ((edx_28 & 2) == 0)
                if ((edx_28 & 1) != 0)
                    return eax
                
                edx_36 = 0
                arg8 = 0
                
                if (arg12 s<= 0)
                    return eax
                
                edi_9 = arg11
            label_57e2d2:
                
                do
                    eax.b = edx_36 == 0
                    uint32_t eax_32 = zx.d(eax.b)
                    sub_57d6f0(eax_32, arg2, arg3, ecx_28, 0, edi_9[edx_36], eax_32.b, 0)
                    eax = sub_57cbc0(arg8, arg2, arg3, arg4, arg5, arg6, arg7, 0x1b, edi_9[arg8], 
                        0, 0)
                    ecx_28 = arg4
                    edx_36 = arg8 + 1
                    arg8 = edx_36
                while (edx_36 s< arg12)
                
                return eax
            
            int32_t edx_29 = arg12
            eax = 0
            edi_9 = arg11
            arg8 = 0
            
            if (edx_29 s> 0)
                do
                    sub_57cd60(eax, arg2, arg3, ecx_28, 3, edi_9[eax], 0, 0)
                    sub_57ce80(arg8, arg2, arg3, arg4, 3, edi_9[arg8], 0, 0)
                    sub_57cbc0(arg8, arg2, arg3, arg4, arg5, arg6, arg7, 5, edi_9[arg8], 0, 0)
                    sub_57d1e0(arg3, arg4, 0xc, edi_9[arg8], 0, 0)
                    edx_29 = arg12
                    eax = arg8 + 1
                    ecx_28 = arg4
                    arg8 = eax
                while (eax s< edx_29)
            
            if ((arg10.b & 1) != 0)
                return sub_57cbc0(eax, arg2, arg3, ecx_28, arg5, arg6, arg7, 4, 0, 0, 0)
            
            if (edx_29 == 1)
                sub_57cbc0(eax, arg2, arg3, ecx_28, arg5, arg6, arg7, 4, *edi_9, 0, 0)
                ecx_28 = arg4
                edx_36 = 0
                arg8 = 0
                goto label_57e2d2
            
            char const* const var_1c_7 = "CollectAbilities"
            var_20_3 = 0x20e0
            ecx_34 = "num == 1"
        case 7
            if (arg12 != 1)
                sub_591930()
            
            sub_57cbc0(sub_57d1e0(arg3, arg4, 1, *arg11, 0, 0), arg2, arg3, arg4, arg5, arg6, arg7, 
                7, *arg11, 0, 0)
            sub_57cbc0(arg11, arg2, arg3, arg4, arg5, arg6, arg7, 8, *arg11, 0, 0)
            sub_57ca30(arg11, arg2, arg3, arg4, arg5, arg6, 0xd, *arg11, arg10, 0)
            sub_57d4c0(arg11, arg2, arg3, arg4, 0, *arg11)
            sub_57cd60(arg11, arg2, arg3, arg4, 0, *arg11, 0, 0)
            sub_57dc90(arg11, arg2, arg3, arg4, 0, *arg11)
            return sub_57d6f0(arg11, arg2, arg3, arg4, 3, *arg11, 1, 0)
        case 8
            if (arg12 != 1)
                eax = sub_591930()
            
            sub_57cbc0(
                sub_57ce80(sub_57d110(eax, arg2, arg3, arg4, 0, *arg11), arg2, arg3, arg4, 7, 
                    *arg11, arg10, arg9), 
                arg2, arg3, arg4, arg5, arg6, arg7, 6, *arg11, arg10, arg9)
            uint32_t eax_44 = arg11
            sub_57cbc0(eax_44, arg2, arg3, arg4, arg5, arg6, arg7, 0xf, *eax_44, arg10, arg9)
            sub_57ca30(arg11, arg2, arg3, arg4, arg5, arg6, 0xe, *arg11, arg10, arg9)
            sub_57d1e0(arg3, arg4, 0, *arg11, arg10, arg9)
            sub_57d8c0(arg11, arg2, arg3, arg4, 2, *arg11, arg9)
            sub_57d4c0(arg11, arg2, arg3, arg4, 1, *arg11)
            void** eax_49 = arg11
            sub_57dc90(eax_49, arg2, arg3, arg4, 1, *eax_49)
            sub_57cd60(arg11, arg2, arg3, arg4, 1, *arg11, arg10, arg9)
            sub_57d6f0(arg11, arg2, arg3, arg4, 2, *arg11, 1, 0)
            eax = *(arg9 + 8)
            
            if (eax == 3 || eax == 2)
                return sub_57ca30(
                    sub_57dc90(sub_57d1e0(arg3, arg4, 0xb, *arg11, arg10, 0), arg2, arg3, arg4, 3, 
                        *arg11), 
                    arg2, arg3, arg4, arg5, arg6, 0x12, *arg11, 0, 0)
            
            return eax
        case 9
            if (arg12 != 1)
                sub_591930()
            
            uint32_t eax_15 = arg11
            sub_57cbc0(eax_15, arg2, arg3, arg4, arg5, arg6, arg7, 9, *eax_15, 0, arg9)
            sub_57d4c0(arg11, arg2, arg3, arg4, 2, *arg11)
            void** eax_17 = arg11
            sub_57dc90(eax_17, arg2, arg3, arg4, 2, *eax_17)
            return sub_57ce80(arg11, arg2, arg3, arg4, 9, *arg11, 0, 0)
        case 0xa
            if (arg12 != 1)
                sub_591930()
            
            uint32_t eax_20 = arg11
            sub_57cbc0(eax_20, arg2, arg3, arg4, arg5, arg6, arg7, 0xa, *eax_20, 0, arg9)
            sub_57ca30(arg11, arg2, arg3, arg4, arg5, arg6, 0x10, *arg11, 0, 0)
            sub_57d8c0(arg11, arg2, arg3, arg4, 1, *arg11, arg9)
            sub_57d4c0(arg11, arg2, arg3, arg4, 3, *arg11)
            sub_57ce80(arg11, arg2, arg3, arg4, 0xa, *arg11, 0, arg9)
            return sub_57d1e0(arg3, arg4, 9, *arg11, arg10, arg9)
        case 0xb
            int32_t edi_18 = 0
            
            if (arg12 s<= 0)
                return eax
            
            do
                eax.b = edi_18 == 0
                eax = sub_57d6f0(arg11, arg2, arg3, arg4, 1, arg11[edi_18], eax.b, 0)
                edi_18 += 1
            while (edi_18 s< arg12)
            
            return eax
        case 0xc
            sub_57ce80(eax, arg2, arg3, arg4, 6, 0, 0, 0)
            return sub_57cbc0(sub_57d1e0(arg3, arg4, 0xa, 0, 0, 0), arg2, arg3, arg4, arg5, arg6, 
                arg7, 0x15, 0, arg10, 0)
        case 0xd
            int32_t edi_20 = 0
            
            if (arg12 s<= 0)
                return eax
            
            void* eax_69
            
            do
                eax_69 = sub_57cd60(arg11, arg2, arg3, arg4, 4, arg11[edi_20], 0, 0)
                edi_20 += 1
            while (edi_20 s< arg12)
            
            return eax_69
        case 0xe
            return sub_57ce80(eax, arg2, arg3, arg4, 2, 0, 0, 0)
        case 0xf, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e
            return eax
        case 0x10
            return sub_57d1e0(arg3, arg4, 8, 0, 0, 0)
        case 0x11
            return sub_57d110(eax, arg2, arg3, arg4, 2, 0)
        case 0x12
            return sub_57cbc0(eax, arg2, arg3, arg4, arg5, arg6, arg7, 0x13, 0, 0, 0)
        case 0x13
            return sub_57cbc0(eax, arg2, arg3, arg4, arg5, arg6, arg7, 0x14, 0, 0, 0)
        case 0x14
            return sub_57cbc0(eax, arg2, arg3, arg4, arg5, arg6, arg7, 0x18, 0, 0, 0)
        case 0x15
            if (arg12 == 1)
                return sub_57cbc0(arg11, arg2, arg3, arg4, arg5, arg6, arg7, 0x1a, *arg11, 0, 0)
            
            char const* const var_1c_23 = "CollectAbilities"
            var_20_3 = 0x2175
            ecx_34 = "num == 1"
        case 0x16
            if (arg12 == 1)
                return sub_57cbc0(arg11, arg2, arg3, arg4, arg5, arg6, arg7, 0x19, *arg11, 0, 0)
            
            char const* const var_1c_22 = "CollectAbilities"
            var_20_3 = 0x2171
            ecx_34 = "num == 1"

sub_63b870(eax, &data_801800, ecx_34, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_20_3, 
    "CollectAbilities")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
