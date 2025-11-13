// 函数: sub_59f9b0
// 地址: 0x59f9b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_1597e68
uint32_t esi = arg5
int32_t eax_2 = data_1597e28 + 1
data_1597e28 = eax_2
void* edi = arg3
void* var_c = edi
char const* const var_3c_2
int32_t var_38_1
char const* const var_34_1
char* ecx
int32_t ebx

if (esi == 0x2f || esi == 0x2e)
    ebx = arg4
    
    if (ebx != 0xffffffff)
        goto label_59fa06
    
    var_34_1 = "DomAddLogEvent"
    var_38_1 = 0x1183
    ecx = "whoControlling != PLAYER_NONE"
label_5a04a3:
    var_3c_2 = "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp"
label_5a04ad:
    sub_63b870(eax_2, &data_801800, ecx, var_3c_2, var_38_1, var_34_1)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

ebx = arg4
label_59fa06:

if (esi == 0)
    return eax_2

if (esi == 1)
    int32_t edx_2
    
    if (arg10 != 0)
        edx_2 = arg4
    else
        int32_t esi_1 = data_1597e3c
        int32_t eax_3 = data_1597e40
        int32_t* ebx_1
        
        if (esi_1 s< eax_3)
            ebx_1 = data_1597e38
        else
            int32_t ecx_1 = 0x10
            int32_t var_14_1 = 0x10
            
            if (eax_3 != 0)
                ecx_1 = eax_3 * 2
                var_14_1 = ecx_1
            
            ebx_1 = sub_64c020(ecx_1 << 4)
            int32_t eax_5 = data_1597e38
            
            if (eax_5 != 0)
                memcpy(ebx_1, eax_5, esi_1 << 4)
                sub_64c080(data_1597e38, data_1597e40 << 4)
            
            esi_1 = data_1597e3c
            data_1597e38 = ebx_1
            data_1597e40 = var_14_1
        
        edx_2 = arg4
        data_1597e3c = esi_1 + 1
        int32_t esi_4 = (esi_1 + 1) * 2
        ebx_1[esi_4 * 2 - 4] = edx_2
        ebx_1[esi_4 * 2 - 3] = arg9
        ebx_1[esi_4 * 2 - 1] = data_1597e28
        ebx_1[esi_4 * 2 - 2] = data_1597e30
        eax_2 = data_1597e28
    
    int32_t ecx_4 = 0
    
    if (*(edi + 0xd38) s<= 0)
        return eax_2
    
    while (true)
        if (ecx_4 != edx_2)
            if (ecx_4 s>= 6)
                break
            
            *((ecx_4 << 2) + &data_1597e50) = eax_2
            eax_2 = data_1597e28
        
        ecx_4 += 1
        
        if (ecx_4 s>= *(edi + 0xd38))
            return eax_2
    
    var_34_1 = "DomAddLogEvent"
    var_38_1 = 0x11a0
    ecx = "i < MAX_PLAYERS_DOM"
    goto label_5a04a3

if (esi == 0x3c)
    if (arg2 == 0xffffffff)
        int32_t ecx_5 = 0
        
        if (*(edi + 0xd38) s> 0)
            while (true)
                *((ecx_5 << 2) + &data_1597e50) = eax_2
                ecx_5 += 1
                
                if (ecx_5 s>= *(edi + 0xd38))
                    break
                
                eax_2 = data_1597e28
        
        return eax_2
    
    if (ebx != 0xffffffff)
        *((arg2 << 2) + &data_1597e50) = eax_2
        int32_t eax_10 = data_1597e28
        *((ebx << 2) + &data_1597e50) = eax_10
        return eax_10
    
    var_34_1 = "DomAddLogEvent"
    var_38_1 = 0x11ab
    ecx = "whoControlling != PLAYER_NONE"
    goto label_5a04a3

int32_t var_1c_1

if (esi == 0x26)
    arg3 = nullptr
    
    if (*(edi + 0xd38) s> 0)
        while (true)
            *((arg3 << 2) + &data_1597e50) = eax_2
            arg3 += 1
            
            if (arg3 s>= *(edi + 0xd38))
                break
            
            eax_2 = data_1597e28
    
    eax_2 = arg9
    var_1c_1 = eax_2
else if (esi != 0x2d)
    switch (esi == 0x27)
        case 0x17, 0x20
            int32_t eax_57 = data_1597e68
            eax_2 = eax_57 - 1
            data_1597e68 = eax_2
            
            if (eax_57 - 1 s>= 0)
                return eax_2
            
            var_34_1 = "DomAddLogEvent"
            var_38_1 = 0x1236
            ecx = "gLog.indent >= 0"
            goto label_5a04a3
        case 0x1f
            data_1597e68 += 1
            return eax_2
        case 0x27, 0x28
            int32_t i = 0
            
            if (*(edi + 0xd38) s> 0)
                do
                    if (arg11 != 0)
                        if (arg11 == 1)
                            *((i << 2) + &data_1597e50) = eax_2
                            eax_2 = data_1597e28
                        else
                            if (arg11 != 2)
                                var_34_1 = "DomAddLogEvent"
                                var_38_1 = 0x11e8
                                ecx = "Halt"
                                goto label_5a04a3
                            
                            if (i != arg2 && i != ebx)
                                *((i << 2) + &data_1597e50) = eax_2
                                eax_2 = data_1597e28
                    
                    i += 1
                while (i s< *(edi + 0xd38))
        case 0x29, 0x2a
            int32_t i_1 = 0
            
            if (*(edi + 0xd38) s> 0)
                do
                    if (arg10 != 0)
                        if (arg10 == 1)
                            *((i_1 << 2) + &data_1597e50) = eax_2
                            eax_2 = data_1597e28
                        else
                            if (arg10 != 2)
                                var_34_1 = "DomAddLogEvent"
                                var_38_1 = 0x11fe
                                ecx = "Halt"
                                goto label_5a04a3
                            
                            if (i_1 != arg2 && i_1 != ebx)
                                *((i_1 << 2) + &data_1597e50) = eax_2
                                eax_2 = data_1597e28
                    
                    i_1 += 1
                while (i_1 s< *(edi + 0xd38))
        case 0x2b, 0x33
            arg3 = nullptr
            
            if (*(edi + 0xd38) s> 0)
                do
                    *((arg3 << 2) + &data_1597e50) = eax_2
                    arg3 += 1
                    eax_2 = data_1597e28
                while (arg3 s< *(edi + 0xd38))
        case 0x2c, 0x2e, 0x2f
            *((ebx << 2) + &data_1597e50) = eax_2
            eax_2 = data_1597e28
            *((arg2 << 2) + &data_1597e50) = eax_2
        case 0x30, 0x31
            arg3 = nullptr
            
            if (*(edi + 0xd38) s> 0)
                do
                    if (arg3 != ebx)
                        *((arg3 << 2) + &data_1597e50) = eax_2
                        eax_2 = data_1597e28
                    
                    arg3 += 1
                while (arg3 s< *(edi + 0xd38))
        case 0x54
            int32_t ecx_10 = 0
            
            if (*(edi + 0xd38) s> 0)
                while (true)
                    *((ecx_10 << 2) + &data_1597e50) = eax_2
                    ecx_10 += 1
                    
                    if (ecx_10 s>= *(edi + 0xd38))
                        break
                    
                    eax_2 = data_1597e28
            
            return eax_2
    
    if (esi == 0x12 || esi == 0x13 || esi == 0x11)
        data_1597e68 += 1
        
        if (esi == 0x11 || esi == 0x12)
            if (arg8 != 1)
                var_34_1 = "DomAddLogEvent"
                var_38_1 = 0x124a
                ecx = "numCards == 1"
                goto label_5a04a3
            
            uint32_t ebx_3 = zx.d((*arg7).w)
            
            if (ebx_3 u>= 0x320)
                sub_591930()
            
            void* eax_14 = ebx_3 * 0x64 + 0x1a4c + edi
            char eax_15
            eax_15, arg3 = sub_5754f0(eax_14, *eax_14, edi, 2, 0)
            
            if (eax_15 == 0)
                eax_2 = arg9
                var_1c_1 = eax_2
            else
                if (ebx_3 u>= 0x320)
                    sub_591930()
                
                if (*eax_14 == 0xc18)
                    eax_2 = arg9
                    var_1c_1 = eax_2
                else if (esi != 0x12)
                    esi = 0x52
                    eax_2 = 0xffffffff
                    var_1c_1 = eax_2
                else
                    esi = 0x53
                    eax_2 = arg9
                    var_1c_1 = eax_2
        else
            eax_2 = arg9
            var_1c_1 = eax_2
    else
        eax_2 = arg9
        var_1c_1 = eax_2
else
    int32_t edx_3 = 0
    
    if (*(edi + 0xd38) s<= 0)
        eax_2 = arg9
        var_1c_1 = eax_2
    else
        int32_t ecx_6 = arg9
        var_1c_1 = ecx_6
        
        while (true)
            if (ecx_6 != 0)
                if (ecx_6 == 1)
                label_59fbde:
                    *((edx_3 << 2) + &data_1597e50) = eax_2
                    eax_2 = data_1597e28
                label_59fbea:
                    edx_3 += 1
                    
                    if (edx_3 s>= *(edi + 0xd38))
                        eax_2 = arg9
                        break
                    
                    ecx_6 = arg9
                    continue
                else if (ecx_6 == 2)
                    if (edx_3 == arg2 || edx_3 == ebx)
                        goto label_59fbea
                    
                    goto label_59fbde
            
            var_34_1 = "DomAddLogEvent"
            var_38_1 = 0x11d2
            ecx = "Halt"
            goto label_5a04a3

int32_t ebx_6 = data_1597e30
int32_t* edx_5 = data_1597e2c
int32_t* var_18_1 = edx_5

if (ebx_6 != 0)
    if (esi == 0xa)
        if (eax_2 != 0)
            goto label_5a0234
        
        if (ebx_6 - 1 s< 0 || ebx_6 - 1 s>= ebx_6)
            goto label_59fec4
        
        void* edx_8 = &var_18_1[(ebx_6 - 1) * 0x10]
        
        if (*(edx_8 + 8) != 0x52 || arg11 != *(edx_8 + 0x24))
            edx_5 = var_18_1
            goto label_5a0234
        
        int32_t eax_17 = *(edx_8 + 0x1c)
        int32_t ebx_4 = arg10
        
        if (eax_17 != 0xffffffff)
            ebx_4 += eax_17
        
        *(edx_8 + 0x1c) = ebx_4
        return eax_17
    
    if (esi == 0x22)
        if (ebx_6 - 1 s< 0 || ebx_6 - 1 s>= ebx_6)
        label_59fec4:
            var_34_1 = "XDynArray<struct DomLogEvent>::operator []"
            var_38_1 = 0xd4
            var_3c_2 = "C:\x\ax2017\Engine\xDynArray.h"
            ecx = "index >= 0 && index < mSize"
            goto label_5a04ad
        
        eax_2 = arg2
        arg3 = &edx_5[(ebx_6 - 1) * 0x10]
        
        if (arg3[2] != 0x21 || arg8 != 1 || arg3[5] != 1 || eax_2 != *arg3)
            goto label_5a02dd
        
        if (eax - 1 != arg3[6] || arg3[3] != *arg7)
            goto label_5a02d6
        
        arg3[2] = 0x24
        eax_2 = data_1597e30
        
        if (eax_2 s<= 1)
            return eax_2
        
        if (eax_2 - 2 s< 0 || eax_2 - 2 s>= eax_2)
            goto label_59fec4
        
        void* edx_12 = ((eax_2 - 2) << 6) + data_1597e2c
        
        if (*(edx_12 + 8) != 0x24)
            return eax_2
        
        sub_59d570(eax_2, edx_12, edi, arg7, 1)
        eax_2 = data_1597e30
        
        if (eax_2 - 1 s< 0 || eax_2 - 1 s>= eax_2)
            var_34_1 = "XDynArray<struct DomLogEvent>::RemoveAt"
            var_38_1 = 0xfe
            var_3c_2 = "C:\x\ax2017\Engine\xDynArray.h"
            ecx = "index >= 0 && index < mSize"
            goto label_5a04ad
        
        if (0 s> 0)
            int32_t ecx_19 = ((eax_2 - 1) << 6) + data_1597e2c
            memmove(ecx_19, ecx_19 + 0x40, 0 << 6)
            eax_2 = data_1597e30
        
        data_1597e30 = eax_2 - 1
        return eax_2 - 1
    
    if (esi != 0x1e)
        if ((esi == 0x27 || esi == 0x28) && (eax_2 == 0x3ea || eax_2 == 0x3eb))
            if (ebx_6 - 1 s< 0 || ebx_6 - 1 s>= ebx_6)
                goto label_59fec4
            
            arg3 = &edx_5[(ebx_6 - 1) * 0x10]
            
            if (arg3[2] == 0x22 && arg8 == 1 && arg3[5] == 1 && arg2 == *arg3 && eax == arg3[6])
                edi = var_c
                
                if (arg3[3] == *arg7)
                    arg3[2] = 0x23
                    arg3[7] = var_1c_1
                    eax_2 = data_1597e30
                    
                    if (eax_2 s< 2)
                        return eax_2
                    
                    if (eax_2 - 2 s< 0 || eax_2 - 2 s>= eax_2)
                        goto label_59fec4
                    
                    int32_t* edx_23 = ((eax_2 - 2) << 6) + data_1597e2c
                    
                    if (edx_23[2] == 0x23)
                        eax_2 = arg2
                        
                        if (eax_2 == *edx_23)
                            eax_2 = arg3[6]
                            
                            if (eax_2 == edx_23[6])
                                void* eax_40 = sub_59d570(eax_2, edx_23, edi, arg7, 1)
                                data_1597e30 -= 1
                                return eax_40
                    
                    return eax_2
        
        if (esi == 0xb)
            eax_2 = var_1c_1
        label_5a0234:
            
            if (ebx_6 - 1 s< 0 || ebx_6 - 1 s>= ebx_6)
                goto label_59fec4
            
            arg3 = &edx_5[(ebx_6 - 1) * 0x10]
            
            if (arg3[2] == esi && *arg3 == arg2 && arg3[7] == eax_2 && arg3[9] == arg11
                    && arg3[0xa] == arg12)
                int32_t edx_25 = arg3[8]
                
                if (edx_25 * arg10 s> 0)
                    int32_t eax_46 = arg10 + edx_25
                    arg3[8] = eax_46
                    return eax_46
            
            goto label_5a0287
        
    label_5a0287:
        
        if (esi == 0x35 || esi == 0x28 || esi == 0x27 || esi == 0x29 || esi == 0x2a || esi == 0x34
            || esi == 0x2c || esi == 0x2d || esi == 0x2e || esi == 0x2f || esi == 0x23
            || esi == 0x3a || esi == 0x22 || esi == 0x52 || esi == 0x53)
        label_5a02d6:
            eax_2 = arg2
        label_5a02dd:
            
            if (ebx_6 - 1 s< 0 || ebx_6 - 1 s>= ebx_6)
                goto label_59fec4
            
            arg3.b = 0
            int32_t* edx_28 = &var_18_1[(ebx_6 - 1) * 0x10]
            
            if (edx_28[2] == esi && eax_2 == *edx_28 && eax == edx_28[6])
                if (esi == 0x52)
                    return sub_59d570(eax, edx_28, edi, arg7, arg8)
                
                int32_t eax_47 = var_1c_1
                
                if (edx_28[7] != eax_47)
                    arg3.b = 1
                else if (esi == 0x29)
                    return sub_59d570(eax_47, edx_28, edi, arg7, arg8)
                
                if (esi == 0x27 || esi == 0x28)
                    eax_47 = edx_28[8]
                    
                    if (eax_47 s<= 0)
                        if (eax_47 == arg10)
                            goto label_5a034b
                    else if (arg10 s> 0 || eax_47 == arg10)
                        goto label_5a034b
                else
                label_5a034b:
                    
                    if (arg3.b == 0)
                        return sub_59d570(eax_47, edx_28, edi, arg7, arg8)
    else
        eax_2 = ebx_6 - 1
        
        if (eax_2 s< 0 || eax_2 s>= ebx_6)
            goto label_59fec4
        
        eax_2 <<= 6
        
        if (*(eax_2 + edx_5 + 8) != 6)
            return eax_2

int32_t eax_23 = data_1597e34

if (ebx_6 s>= eax_23)
    int32_t ecx_20 = 0x10
    int32_t var_10_2 = 0x10
    
    if (eax_23 != 0)
        ecx_20 = eax_23 * 2
        var_10_2 = ecx_20
    
    int32_t* eax_24 = sub_64c020(ecx_20 << 6)
    int32_t ecx_22 = data_1597e2c
    var_18_1 = eax_24
    
    if (ecx_22 != 0)
        memcpy(eax_24, ecx_22, ebx_6 << 6)
        sub_64c080(data_1597e2c, data_1597e34 << 6)
        eax_24 = var_18_1
    
    ebx_6 = data_1597e30
    data_1597e2c = eax_24
    data_1597e34 = var_10_2

data_1597e30 = ebx_6 + 1
void* ebx_9 = &var_18_1[(ebx_6 + 1) * 0x10]
*(ebx_9 - 0x28) = eax
*(ebx_9 - 0x40) = arg2
*(ebx_9 - 0x14) = arg6
*(ebx_9 - 0x24) = var_1c_1
*(ebx_9 - 0x20) = arg10
*(ebx_9 - 0x1c) = arg11
*(ebx_9 - 0x3c) = arg4
*(ebx_9 - 0x18) = arg12
*(ebx_9 - 0x38) = esi
*(ebx_9 - 4) = data_1597e28
eax_2 = data_1597e3c - 1
*(ebx_9 - 0x10) = eax_2
int32_t ecx_24 = data_1597e3c
int32_t edx_20 = ecx_24 - 2

if (edx_20 s>= 0)
    eax_2 = edx_20 << 4
    int32_t var_14_2 = eax_2
    
    while (true)
        if (edx_20 s>= ecx_24)
            var_34_1 = "XDynArray<struct DomLogDecision>::operator []"
            var_38_1 = 0xd4
            var_3c_2 = "C:\x\ax2017\Engine\xDynArray.h"
            ecx = "index >= 0 && index < mSize"
            goto label_5a04ad
        
        eax_2 = data_1597e38
        edi = var_c
        
        if (*(var_14_2 + eax_2 + 8) != data_1597e30 - 1)
            break
        
        var_14_2 -= 0x10
        *(ebx_9 - 0x10) = edx_20
        int32_t temp9_1 = edx_20
        edx_20 -= 1
        
        if (temp9_1 - 1 s< 0)
            break
        
        ecx_24 = data_1597e3c

if (esi != 9 && esi != 0x3e && esi != 0x49)
    return sub_59d5d0(eax_2, edi, ebx_9 - 0x40, arg7, arg8, esi)

eax_2 = data_1597e48
int32_t edx_30 = 0
*(ebx_9 - 0x30) = eax_2
*(ebx_9 - 0x2c) = 0
int32_t var_c_1 = 0

if (arg8 s<= 0)
    return eax_2

int32_t eax_56

do
    int32_t ecx_36 = data_1597e48
    int32_t eax_50 = data_1597e4c
    int32_t* esi_5
    
    if (ecx_36 s< eax_50)
        esi_5 = data_1597e44
    else
        int32_t edi_3 = 0x10
        
        if (eax_50 != 0)
            edi_3 = eax_50 * 2
        
        esi_5 = sub_64c020(edi_3 << 3)
        int32_t eax_53 = data_1597e44
        
        if (eax_53 != 0)
            memcpy(esi_5, eax_53, ecx_36 << 3)
            sub_64c080(data_1597e44, data_1597e4c << 3)
        
        ecx_36 = data_1597e48
        edx_30 = var_c_1
        data_1597e44 = esi_5
        data_1597e4c = edi_3
    
    data_1597e48 = ecx_36 + 1
    eax_56 = arg7[edx_30]
    edx_30 += 1
    esi_5[(ecx_36 + 1) * 2 - 2] = eax_56
    esi_5[(ecx_36 + 1) * 2 - 1] = 1
    *(ebx_9 - 0x2c) += 1
    var_c_1 = edx_30
while (edx_30 s< arg8)

return eax_56
