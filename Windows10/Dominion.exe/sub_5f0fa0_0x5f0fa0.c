// 函数: sub_5f0fa0
// 地址: 0x5f0fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = sub_4b9480()
int32_t* var_1c_2
int32_t* var_18_2
void* ecx
void* edx_1

if (eax[0x4c4] != 0)
    edx_1 = 3
label_5f19c7:
    void* var_14_23 = ecx
    var_18_2 = nullptr
    var_1c_2 = nullptr
label_5f19d1:
    sub_5f0d20(eax, edx_1, &data_19e3a00, var_1c_2, var_18_2)
label_5f19e8:
    __builtin_memcpy(arg1, &data_19e3a00, 0x90)
    return arg1

if (data_b824dc != 0)
label_5f19c2:
    edx_1 = 8
    goto label_5f19c7

int32_t* eax_1 = sub_4b9480()
ecx = nullptr
int32_t esi_1 = eax_1[0x46a]

if (esi_1 s> 0)
    void* edx_2 = &eax_1[0x1a]
    
    do
        eax = *edx_2
        
        if (eax == 0x3e9)
            goto label_5f19c2
        
        if (eax == 0x3ec)
            goto label_5f19c2
        
        if (eax == 0x3ed)
            goto label_5f19c2
        
        ecx += 1
        edx_2 += 0x22c
    while (ecx s< esi_1)

if (data_b80b5c != 0)
    for (int32_t* i = &data_19e3a30; i s< &data_19e3a60; i = &i[1])
        if (*i != 0)
            *i = 4
    
    goto label_5f19e8

eax = data_b604e0
ecx = nullptr
int32_t esi_2 = data_b80b44

if (eax == 0xffffffff)
    eax = nullptr

if (esi_2 != eax)
    edx_1 = nullptr
    goto label_5f19c7

ecx = data_cc8d5c
char const* const var_1c_1
int32_t var_18_1
char const* const var_14_1
char* ecx_1

if (ecx != 0)
    eax = data_b80b48
    
    if (eax != *(ecx + 0x7590))
        edx_1 = nullptr
        goto label_5f19c7
    
    int32_t edx_3 = data_b80afc
    
    if (edx_3 == 7)
        edx_1 = 9
        goto label_5f19c7
    
    eax = data_b80b08
    
    if (eax == 0x9f)
        void* var_14_2 = ecx
        var_18_2 = nullptr
        var_1c_2 = 2
        edx_1 = 1
        goto label_5f19d1
    
    if (eax == 0x107)
        edx_1 = eax - 0x49
        goto label_5f19c7
    
    if (eax == 0xd5)
        edx_1 = eax - 0x43
        goto label_5f19c7
    
    if (eax == 0x89 || eax == 0x87 || eax == 0x86 || eax == 0x8b || eax == 0x8a || eax == 0x88
            || eax == 0x85)
        if (data_b8097c == 0 && eax != 0x85)
            edx_1 = 2
            goto label_5f19c7
        
        void* var_14_22 = ecx
        sub_5f0d20(eax, 1, &data_19e3a00, 0, 0)
        int32_t ecx_14 = data_b8097c
        
        if (ecx_14 == 6 || ecx_14 == data_b80b18)
            goto label_5f19e8
        
        if (ecx_14 s<= 2)
            int32_t esi_6 = 0
            
            if (ecx_14 s<= 0)
                goto label_5f19e8
            
            while (true)
                uint32_t edi_2 = zx.d((&data_b7fcfc)[esi_6 * 2])
                
                if (edi_2 u>= 0x320)
                    sub_591930()
                    ecx_14 = data_b8097c
                
                if (*(edi_2 * 0x64 + &data_b82524) != 0x100)
                    break
                
                esi_6 += 1
                
                if (esi_6 s>= ecx_14)
                    goto label_5f19e8
        
        if (ecx_14 s> 1)
            data_19e3a30 = 3
            goto label_5f19e8
        
        int32_t esi_7 = 0
        
        if (ecx_14 s<= 0)
            goto label_5f19e8
        
        while (true)
            uint32_t edi_3 = zx.d((&data_b7fcfc)[esi_7 * 2])
            
            if (edi_3 u>= 0x320)
                sub_591930()
            
            int32_t eax_22 = edi_3 * 0x64
            
            if (sub_5754f0(eax_22, *(eax_22 + &data_b82524), 0xb80ad8, 0x20, 0) == 0)
                break
            
            esi_7 += 1
            
            if (esi_7 s>= data_b8097c)
                goto label_5f19e8
        
        data_19e3a30 = 3
        goto label_5f19e8
    
    if (edx_3 == 2)
        edx_1 = 1
        goto label_5f19c7
    
    switch (eax)
        case 0x27, 0x3b
            void* var_14_19 = ecx
            sub_5f0d20(eax, 4, &data_19e3a00, 0, 0)
            int32_t eax_18 = data_b80b08
            int32_t esi_5 = data_b80b28
            int32_t edi_1 = data_b80b2c
            
            if (eax_18 != 0x3b && eax_18 != 0x7b)
                goto label_5f19e8
            
            int32_t ecx_12 = data_b604e0
            
            if (ecx_12 == 0xffffffff)
                ecx_12 = 0
            
            if (sub_5d1210(0, 0x3f0, ecx_12, esi_5, edi_1) != 1)
                data_19e3a30 = 3
                goto label_5f19e8
            
            int32_t ecx_13 = data_b604e0
            
            if (ecx_13 == 0xffffffff)
                ecx_13 = 0
            
            if (sub_5d1210(0, 0x3ef, ecx_13, esi_5, edi_1) != 1)
                data_19e3a30 = 3
            
            goto label_5f19e8
        case 0x2c, 0xd2
            edx_1 = nullptr
            goto label_5f19c7
        case 0x2d
            edx_1 = eax - 0x11
            goto label_5f19c7
        case 0x36, 0x133
            eax = sub_5d1210(eax, 0x3ea, esi_2, 0, 0)
            ecx = eax
            
            if (ecx == 0)
                void* var_14_16 = ecx
                var_18_2 = eax
                var_1c_2 = 0x29
                edx_1 = eax + 0x26
                goto label_5f19d1
            
            eax = data_b8097c
            
            if (eax == 0)
                void* var_14_17 = ecx
                var_18_2 = eax
                var_1c_2 = eax
                
                if (data_b80b08 != 0x36)
                    edx_1 = 0xd7
                else
                    edx_1 = eax + 0x29
                
                goto label_5f19d1
            
            int32_t edx_12 = data_b80b08
            
            if (eax != 1)
                if (eax != 2)
                    if (eax == 3)
                        edx_1 = 0xd8
                        goto label_5f19c7
                else if (edx_12 == 0x36 || ecx == eax)
                    edx_1 = 0x28
                    goto label_5f19c7
            else if (ecx == 1)
                edx_1 = ecx + 0x26
                goto label_5f19c7
            
            void* var_14_18 = ecx
            int32_t edx_13 = 0x28
            
            if (edx_12 != 0x36)
                edx_13 = 0xd8
            
            sub_5f0d20(eax, edx_13, &data_19e3a00, 0, 0)
            data_19e3a30 = 3
            goto label_5f19e8
        case 0x4d
            int32_t eax_2
            int32_t ecx_3
            eax_2, ecx_3 = sub_5d1210(eax, 0x3ea, esi_2, 0, 0)
            
            if (eax_2 != 1)
                data_19e3a00 = 0x5a
                data_19e3a60 = 0
                data_19e3a30 = 1
                void* eax_3 = sub_5cb070()
                
                if (eax_3 != 0)
                    int32_t ecx_4 = *(eax_3 + 0x10)
                    
                    if (ecx_4 == 0xa || ecx_4 == 9 || ecx_4 == 8)
                        if (data_19e3a00 != 0xb)
                            data_19e3a30 = 3
                    else if (ecx_4 != 1 && ecx_4 != 0x19 && ecx_4 != 6 && ecx_4 != 7
                            && ((ecx_4 != 0x13 && ecx_4 != 0x14) || data_b80988 != data_b80990)
                            && (ecx_4 != 0x16 || data_19e3a00 != *(eax_3 + 0x18)))
                        data_19e3a30 = 3
                
                data_19e3a04 = 0x59
                data_19e3a64 = 0
                data_19e3a34 = 1
                void* eax_6 = sub_5cb070()
                
                if (eax_6 != 0)
                    int32_t ecx_5 = *(eax_6 + 0x10)
                    
                    if (ecx_5 == 0xa || ecx_5 == 9 || ecx_5 == 8)
                        if (data_19e3a04 != 0xb)
                            data_19e3a34 = 3
                    else if (ecx_5 != 1 && ecx_5 != 0x19 && ecx_5 != 6 && ecx_5 != 7
                            && ((ecx_5 != 0x13 && ecx_5 != 0x14) || data_b80988 != data_b80990)
                            && (ecx_5 != 0x16 || data_19e3a04 != *(eax_6 + 0x18)))
                        data_19e3a34 = 3
                
                data_19e3a08 = 0x58
                data_19e3a68 = 0
                data_19e3a38 = 1
                void* eax_9 = sub_5cb070()
                
                if (eax_9 != 0)
                    int32_t ecx_6 = *(eax_9 + 0x10)
                    
                    if (ecx_6 == 0xa || ecx_6 == 9 || ecx_6 == 8)
                        if (data_19e3a08 != 0xb)
                            data_19e3a38 = 3
                    else if (ecx_6 != 1 && ecx_6 != 0x19 && ecx_6 != 6 && ecx_6 != 7
                            && ((ecx_6 != 0x13 && ecx_6 != 0x14) || data_b80988 != data_b80990)
                            && (ecx_6 != 0x16 || data_19e3a08 != *(eax_9 + 0x18)))
                        data_19e3a38 = 3
                
                data_19e3a0c = 0x57
                data_19e3a6c = 0
                data_19e3a3c = 1
                void* eax_12 = sub_5cb070()
                
                if (eax_12 != 0)
                    int32_t ecx_7 = *(eax_12 + 0x10)
                    
                    if (ecx_7 == 0xa || ecx_7 == 9 || ecx_7 == 8)
                        if (data_19e3a0c != 0xb)
                            data_19e3a3c = 3
                    else if (ecx_7 != 1 && ecx_7 != 0x19 && ecx_7 != 6 && ecx_7 != 7
                            && ((ecx_7 != 0x13 && ecx_7 != 0x14) || data_b80988 != data_b80990)
                            && (ecx_7 != 0x16 || data_19e3a0c != *(eax_12 + 0x18)))
                        data_19e3a3c = 3
                
                int32_t eax_15 = data_b8097c
                __builtin_memset(&data_19e3a40, 0, 0x20)
                
                if (eax_15 == 0)
                    data_19e3a34 = 3
                    data_19e3a38 = 3
                    data_19e3a3c = 3
                    goto label_5f19e8
                
                data_19e3a30 = 3
                
                if (eax_15 == 1)
                    data_19e3a3c = 3
                    goto label_5f19e8
            else
                int32_t var_14_3 = ecx_3
                sub_5f0d20(eax_2, eax_2 + 0x59, &data_19e3a00, 0x59, 0x58)
                
                if (data_b8097c != 0)
                    data_19e3a30 = 3
                    goto label_5f19e8
            
            data_19e3a34 = 3
            data_19e3a38 = 3
            goto label_5f19e8
        case 0x4e
            void* var_14_4 = ecx
            sub_5f0d20(eax, eax + 0xe, &data_19e3a00, 0x5b, 0)
            int32_t eax_16 = data_b8097c
            
            if (eax_16 == 0)
                data_19e3a34 = 3
                goto label_5f19e8
            
            if (eax_16 != 1)
                goto label_5f19e8
            
            data_19e3a30 = 3
            goto label_5f19e8
        case 0x7b
            edx_1 = 4
            goto label_5f19c7
        case 0x114
            edx_1 = eax - 0x4a
            goto label_5f19c7
    
    if (edx_3 == 4)
        sub_5f0db0(eax, &data_b80b68, &data_19e3a00, data_b80b64, data_b80b54, data_b80b18)
        goto label_5f19e8
    
    if (eax == 0x81 || eax == 0x80)
        edx_1 = 4
        goto label_5f19c7
    
    switch (eax)
        case 1
            edx_1 = eax + 9
            goto label_5f19c7
        case 2, 0xfd
            int32_t ecx_10 = data_b80b18
            
            if ((ecx_10.b & 2) != 0)
                edx_1 = 0xc
            else if (eax != 0xfd)
                edx_1 = 0xe
            else
                edx_1 = 2
            
            int32_t var_14_14 = ecx_10
            var_18_2 = nullptr
            
            if ((ecx_10.b & 1) == 0)
                var_1c_2 = nullptr
            else
                var_1c_2 = 0xb
            
            goto label_5f19d1
        case 3
            void* var_14_7 = ecx
            var_18_2 = nullptr
            var_1c_2 = nullptr
            
            if ((data_b80b18.b & 2) == 0)
                edx_1 = 0xe
            else
                edx_1 = eax + 9
            
            goto label_5f19d1
        case 8
            edx_1 = eax + 7
            goto label_5f19c7
        case 0x33
        label_5f1750:
            
            if (eax == 0x101 || (data_b7fcf0 != 0 && data_b7fcd0 == 0))
                edx_1 = 1
                goto label_5f19c7
            
            void* var_14_15 = ecx
            sub_5f0d20(eax, 1, &data_19e3a00, 0, 0)
            data_19e3a30 = 3
            goto label_5f19e8
        case 0x34
            goto label_5f1750
        case 0x48
            void* var_14_6 = ecx
            var_18_2 = nullptr
            var_1c_2 = 0x52
            edx_1 = eax + 0xb
            goto label_5f19d1
        case 0xbe
            edx_1 = 0x10
            goto label_5f19c7
        case 0x101
            edx_1 = 1
            goto label_5f19c7
    
    ecx = data_b8097c
    
    if (eax != 0x14)
        if (eax == 0x10 && ecx == 0)
            edx_1 = 2
            goto label_5f19c7
    else if (ecx == 0)
        edx_1 = 2
        goto label_5f19c7
    
    int32_t esi_3 = data_b80b54
    
    if (esi_3 s> 1 && edx_3 != 5)
        void* var_14_8 = ecx
        var_18_2 = nullptr
        var_1c_2 = nullptr
        
        if (ecx s< data_b80b58)
            sub_5f0d20(eax, 1, &data_19e3a00, 0, 0)
            data_19e3a30 = 3
            goto label_5f19e8
        
    label_5f15d5:
        
        if (ecx == 0)
            edx_1 = 2
            goto label_5f19d1
        
        edx_1 = 1
        goto label_5f19d1
    
    if (edx_3 u> 8)
        var_14_1 = "CalcOkState"
        var_18_1 = 0x747c
        ecx_1 = "Halt"
        var_1c_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else
        switch (edx_3)
            case 0
                goto label_5f19e8
            case 1
                void* var_14_9 = ecx
                var_18_2 = nullptr
                var_1c_2 = nullptr
                
                if (ecx s>= data_b80b58)
                    goto label_5f15d5
                
                if (esi_3 == 1)
                    edx_1 = nullptr
                    goto label_5f19d1
                
                sub_5f0d20(eax, 1, &data_19e3a00, 0, 0)
                data_19e3a30 = 3
                goto label_5f19e8
            case 3
                if (eax != 0x38)
                    if (data_b81808 != 2)
                        edx_1 = 5
                        goto label_5f19c7
                    
                    int32_t edx_10 = data_b817e8
                    void* eax_17 = sub_5f0ef0(eax, edx_10, eax, edx_10)
                    int32_t edx_11 = data_b817ec
                    eax = sub_5f0ef0(eax_17, edx_11, data_b80b08, edx_11)
                    var_18_2 = nullptr
                    var_1c_2 = eax
                    edx_1 = eax_17
                    goto label_5f19d1
                
                if (data_b817e8 == 0x475)
                    void* var_14_10 = ecx
                    var_18_2 = nullptr
                    var_1c_2 = 0x2e
                    edx_1 = 0x2f
                    goto label_5f19d1
                
                var_14_1 = "CalcOkState"
                var_18_1 = 0x7450
                ecx_1 = "yld.whereOptions[0] == CW_PLAYER_DECK_BOTTOM"
                var_1c_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            case 5
                edx_1 = 7
                goto label_5f19c7
            case 6, 8
                void* var_14_13 = ecx
                var_18_2 = nullptr
                var_1c_2 = nullptr
                
                if (data_b80b58 != 0)
                    edx_1 = nullptr
                    goto label_5f19d1
                
                edx_1 = 2
                goto label_5f19d1
else
    var_14_1 = "GetClient"
    var_18_1 = 0x7b
    var_1c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"

sub_63b870(eax, &data_801800, ecx_1, var_1c_1, var_18_1, var_14_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
