// 函数: sub_581bd0
// 地址: 0x581bd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t edi = zx.d(arg2.w)
void* esi = arg3
int32_t var_8 = arg2

if (edi u>= 0x320)
    sub_591930()
    arg2 = var_8

void* ebx_1 = edi * 0x64 + esi
*(ebx_1 + 0x1a7c) = *(ebx_1 + 0x1a80)
void* eax_1 = arg5
int32_t var_28_8

if (eax_1 u> 0xb)
    char const* const var_24_9 = "RevealCard"
    var_28_8 = 0x29d1
else
    switch (eax_1)
        case nullptr
            uint32_t i = 0
            
            if (*(esi + 0xd38) s> 0)
                do
                    eax_1 = sub_581a00(eax_1, arg2, esi, i, 6)
                    arg2 = var_8
                    i += 1
                while (i s< *(esi + 0xd38))
            
            *(ebx_1 + 0x1a80) = 0
            return eax_1
        case 1
            uint32_t i_1 = 0
            
            if (*(esi + 0xd38) s<= 0)
                *(ebx_1 + 0x1a80) = 2
                return eax_1
            
            void* eax_8
            
            do
                if (arg4 == i_1)
                    arg3.b = 1
                else if (arg4 != *(esi + 0x19cc) || i_1 != *(esi + 0x19d0))
                    arg3.b = 0
                else
                    arg3.b = 1
                
                int32_t* eax_7 = 6
                
                if (arg3.b == 0)
                    eax_7 = nullptr
                
                eax_8 = sub_581a00(eax_7, arg2, esi, i_1, eax_7)
                arg2 = var_8
                i_1 += 1
            while (i_1 s< *(esi + 0xd38))
            
            *(ebx_1 + 0x1a80) = 2
            return eax_8
        case 2
            uint32_t i_2 = 0
            
            if (*(esi + 0xd38) s> 0)
                void* ebx_2 = ebx_1 + 0x1a84
                
                do
                    int32_t* eax_6
                    
                    if (arg4 == i_2 || (arg4 == *(esi + 0x19cc) && i_2 == *(esi + 0x19d0)))
                        eax_6 = 6
                    else
                        int32_t eax_2
                        eax_2.b = *ebx_2
                        eax_2.b &= 6
                        uint32_t eax_3 = zx.d(eax_2.b)
                        int32_t eax_4 = neg.d(eax_3)
                        eax_6 = sbb.d(eax_4, eax_4, eax_3 != 0) & 6
                    
                    eax_1 = sub_581a00(eax_6, arg2, esi, i_2, eax_6)
                    arg2 = var_8
                    i_2 += 1
                    ebx_2 += 4
                while (i_2 s< *(esi + 0xd38))
            
            *(ebx_1 + 0x1a80) = 2
            return eax_1
        case 3
            uint32_t i_3 = 0
            
            if (*(esi + 0xd38) s> 0)
                void* ebx_5 = ebx_1 + 0x1a84
                
                do
                    int32_t* eax_13
                    
                    if (arg4 == i_3 || (arg4 == *(esi + 0x19cc) && i_3 == *(esi + 0x19d0)))
                        eax_13 = 6
                    else
                        int32_t eax_9
                        eax_9.b = *ebx_5
                        eax_9.b &= 6
                        uint32_t eax_10 = zx.d(eax_9.b)
                        int32_t eax_11 = neg.d(eax_10)
                        eax_13 = sbb.d(eax_11, eax_11, eax_10 != 0) & 2
                    
                    eax_1 = sub_581a00(eax_13, arg2, esi, i_3, eax_13)
                    arg2 = var_8
                    i_3 += 1
                    ebx_5 += 4
                while (i_3 s< *(esi + 0xd38))
            
            *(ebx_1 + 0x1a80) = 1
            return eax_1
        case 4
            if (*(ebx_1 + 0x1a50) == 0x3ea)
                sub_581b30(esi, arg4)
            
            uint32_t i_4 = 0
            
            if (*(esi + 0xd38) s> 0)
                do
                    if (arg4 == i_4)
                        arg3.b = 1
                    else if (arg4 != *(esi + 0x19cc) || i_4 != *(esi + 0x19d0))
                        arg3.b = 0
                    else
                        arg3.b = 1
                    
                    int32_t* eax_14 = 6
                    
                    if (arg3.b == 0)
                        eax_14 = nullptr
                    
                    sub_581a00(eax_14, var_8, esi, i_4, eax_14)
                    i_4 += 1
                while (i_4 s< *(esi + 0xd38))
            
            *(ebx_1 + 0x1a80) = 1
            return ebx_1
        case 5
            uint32_t i_5 = 0
            
            if (*(esi + 0xd38) s<= 0)
                *(ebx_1 + 0x1a80) = 1
                return eax_1
            
            do
                if (arg4 == i_5)
                    eax_1 = sub_581a00(eax_1, arg2, esi, i_5, 6)
                else if (arg4 == *(esi + 0x19cc) && i_5 == *(esi + 0x19d0))
                    eax_1 = sub_581a00(eax_1, arg2, esi, i_5, 6)
                
                arg2 = var_8
                i_5 += 1
            while (i_5 s< *(esi + 0xd38))
            
            *(ebx_1 + 0x1a80) = 1
            return eax_1
        case 6, 7, 8, 9
            int32_t ecx_5 = arg6
            uint32_t i_6 = 0
            
            if (*(esi + 0xd38) s> 0)
                void* eax_16 = ebx_1 + 0x1a84
                void* var_10_1 = eax_16
                
                do
                    int32_t* eax_18
                    
                    if (arg4 == i_6)
                        eax_18 = 6
                    else if (arg4 != *(esi + 0x19cc))
                        if (ecx_5 != 0)
                            eax_18 = 6
                        else
                            eax_18 = zx.d(*eax_16) & 2
                    else if (i_6 == *(esi + 0x19d0) || ecx_5 != 0)
                        eax_18 = 6
                    else
                        eax_18 = zx.d(*eax_16) & 2
                    
                    sub_581a00(eax_18, arg2, esi, i_6, eax_18)
                    i_6 += 1
                    arg2 = var_8
                    eax_16 = var_10_1 + 4
                    ecx_5 = arg6
                    var_10_1 = eax_16
                while (i_6 s< *(esi + 0xd38))
                
                eax_1 = arg5
            
            if (ecx_5 != 0)
                *(ebx_1 + 0x1a80) = 0
                return eax_1
            
            eax_1 -= 6
            
            if (eax_1 u> 3)
                char const* const var_24_6 = "RevealCard"
                var_28_8 = 0x29b4
            else
                switch (eax_1)
                    case nullptr, 2, 3
                        *(ebx_1 + 0x1a80) = 2
                        return eax_1
                    case 1
                        *(ebx_1 + 0x1a80) = 1
                        return eax_1
        case 0xa
            if (*(ebx_1 + 0x1a50) == 0x3ea)
                sub_581b30(esi, arg4)
            
            uint32_t i_7 = 0
            
            if (*(esi + 0xd38) s> 0)
                do
                    if (arg4 == i_7)
                        arg3.b = 1
                    else if (arg4 != *(esi + 0x19cc) || i_7 != *(esi + 0x19d0))
                        arg3.b = 0
                    else
                        arg3.b = 1
                    
                    int32_t* eax_20 = 6
                    
                    if (arg3.b == 0)
                        eax_20 = nullptr
                    
                    sub_581a00(eax_20, var_8, esi, i_7, eax_20)
                    i_7 += 1
                while (i_7 s< *(esi + 0xd38))
            
            *(ebx_1 + 0x1a80) = 2
            return ebx_1
        case 0xb
            uint32_t i_8 = 0
            
            if (*(esi + 0xd38) s<= 0)
                *(ebx_1 + 0x1a80) = 1
                return eax_1
            
            void* ebx_11 = ebx_1 + 0x1a84
            void* eax_24
            
            do
                int32_t* eax_22
                
                if (i_8 != arg4)
                    eax_22 = zx.d(*ebx_11) & 2
                else
                    eax_22 = 6
                
                eax_24 = sub_581a00(eax_22, arg2, esi, i_8, eax_22)
                arg2 = var_8
                i_8 += 1
                ebx_11 += 4
            while (i_8 s< *(esi + 0xd38))
            
            *(ebx_1 + 0x1a80) = 1
            return eax_24

sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_28_8, 
    "RevealCard")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
