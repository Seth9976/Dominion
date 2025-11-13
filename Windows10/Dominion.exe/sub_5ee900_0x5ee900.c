// 函数: sub_5ee900
// 地址: 0x5ee900
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i_4 = arg2
uint32_t eax = sub_5cba00(arg1)
int32_t edx = *(eax + 0x2c)
int32_t var_1c
void* i_3

if (edx != 3)
    int32_t eax_5
    
    if (edx == 0 && *(eax + 0xa4) == 0x3ec)
        eax_5 = sub_5cda30(data_b80b08)
    
    if (edx == 0 && *(eax + 0xa4) == 0x3ec && eax_5 != 2)
        return 0
    
    int32_t esi_2 = 0
    var_1c = 0xffffffff
    
    if (edx == 0)
        void* i = data_b809e0
        void* eax_8 = data_b809e4 * 0x1c30 + i
        
        if (i u>= eax_8)
        label_5ee9d6:
            i = 0xffffffff
        else
            while ((*(i + 0x1c28) & 0xffff0000) == 0)
                i += 0x1c30
                
                if (i u>= eax_8)
                    goto label_5ee9d6
        
        i_3 = i
        
        if (i == 0xffffffff)
            return 0
        
        do
            if (*(i + 0x2c) == 0 && i != eax && *(i + 0xa0) == *(eax + 0xa0))
                int32_t eax_10 = *(i + 0xa4)
                
                if (eax_10 == *(eax + 0xa4))
                    if (eax_10 != 0x474)
                    label_5eea33:
                        
                        if (*(i + 0xbc) != 0)
                            int32_t eax_13 = *(i + 0xb0)
                            int32_t eax_14 = eax_13 - *(eax + 0xb0)
                            
                            if (eax_13 - *(eax + 0xb0) s< 0 && i_4 == 0)
                            label_5eea57:
                                int32_t eax_15
                                int32_t edx_2
                                edx_2:eax_15 = sx.q(eax_14)
                                int32_t eax_17 = (eax_15 ^ edx_2) - edx_2
                                
                                if (esi_2 == 0 || eax_17 s< var_1c)
                                    esi_2 = *(i + 0x1c28)
                                    var_1c = eax_17
                            else if (eax_14 s> 0 && i_4 == 1)
                                goto label_5eea57
                    else if (*(i + 0xc8) == *(eax + 0xc8) && *(i + 0xcc) == *(eax + 0xcc))
                        goto label_5eea33
            
            sub_6376d0(&data_b809e0, &i_3)
            i = i_3
        while (i != 0xffffffff)
        
        int32_t var_1c_1 = esi_2
        return esi_2
else
    int32_t eax_1 = *(eax + 0x5c)
    
    if (eax_1 s< 7 || eax_1 s> 0x47)
        return 0
    
    var_1c = 0xffffffff

void* esi_1 = *(eax + 0x5c)
int32_t edx_1 = 0
char const* const var_34_1
int32_t var_30_1
char const* const var_2c_2
void* eax_21
char* ecx_2
int32_t eax_20
void* ecx_1

if (esi_1 - 7 u<= 0xb)
    do
        int32_t eax_3
        eax_3.b = i_4 != 0
        esi_1 += (eax_3 << 1) + 0xffffffff
        
        if (esi_1 s< 7)
            esi_1 = 0x12
        else if (esi_1 s> 0x12)
            esi_1 = 7
        
        eax_20 = esi_1 << 4
    while (*(eax_20 + 0xb81ffc) == 0)
    
label_5eeab2:
    ecx_1 = esi_1
label_5eeabb:
    eax_21 = sub_5cc410(eax_20, 0xffffffff, ecx_1, 0, 0)
    
    if (eax_21 != 0)
        return *(eax_21 + 0x1c28)
    
    var_2c_2 = "DomPileGet"
    var_30_1 = 0x9b0
    ecx_2 = "pPile"
    var_34_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else if (esi_1 - 0x13 u> 0x13)
    if (esi_1 - 0x27 u<= 0x20)
        while (true)
            int32_t eax_31
            eax_31.b = i_4 != 0
            esi_1 += (eax_31 << 1) + 0xffffffff
            
            if (esi_1 s< 0x27)
                esi_1 = 0x47
            else if (esi_1 s> 0x47)
                esi_1 = 0x27
            
            eax_20 = esi_1 << 4
            int32_t ecx_8 = *(eax_20 + 0xb81ffc)
            bool cond:2_1
            
            if (ecx_8 s> 0xd3d)
                if (ecx_8 == 0x1128)
                    continue
                else
                    cond:2_1 = ecx_8 == 0x1301
            else if (ecx_8 == 0xd3d)
                continue
            else if (ecx_8 == 0x70d)
                continue
            else if (ecx_8 == 0x718)
                continue
            else
                eax_20 = ecx_8 - 0xd30
                cond:2_1 = ecx_8 == 0xd30
            
            if (not(cond:2_1))
                if (ecx_8 != 0)
                    break
        
        goto label_5eeab2
    
    void* i_2 = data_b809e0
    void* i_1 = i_2
    eax_20 = data_b809e4 * 0x1c30 + i_1
    
    if (i_1 u>= eax_20)
    label_5eed36:
        i_1 = 0xffffffff
    else
        while ((*(i_1 + 0x1c28) & 0xffff0000) == 0)
            i_1 += 0x1c30
            
            if (i_1 u>= eax_20)
                goto label_5eed36
    
    i_3 = i_1
    
    if (i_1 != 0xffffffff)
        int32_t ebx_2 = *(eax + 0x5c)
        int32_t esi_3 = 0
        
        do
            if (*(i_1 + 0x2c) == 3)
                int32_t edx_6 = *(i_1 + 0x5c)
                
                if (edx_6 - 7 u<= 0x40)
                    int32_t edx_7 = edx_6 - ebx_2
                    
                    if (edx_6 - ebx_2 s>= 0)
                        if (edx_7 s> 0 && i_4 == 1)
                            goto label_5eed6d
                    else if (i_4 == 0)
                    label_5eed6d:
                        int32_t eax_40
                        int32_t edx_8
                        edx_8:eax_40 = sx.q(edx_7)
                        int32_t eax_42 = (eax_40 ^ edx_8) - edx_8
                        
                        if (esi_3 == 0 || eax_42 s< var_1c)
                            esi_3 = *(i_1 + 0x1c28)
                            var_1c = eax_42
            
            eax_20 = sub_6376d0(&data_b809e0, &i_3)
            i_1 = i_3
        while (i_1 != 0xffffffff)
        
        i_2 = data_b809e0
        edx_1 = esi_3
    
    if (i_4 == 1)
        if (edx_1 != 0)
            return edx_1
        
        ecx_1 = i_4 + 6
        goto label_5eeabb
    
    if (i_4 != 0 || edx_1 != 0)
        return edx_1
    
    eax_21 = data_b809e4 * 0x1c30 + i_2
    
    if (i_2 u>= eax_21)
    label_5eee06:
        i_2 = 0xffffffff
    else
        while ((*(i_2 + 0x1c28) & 0xffff0000) == 0)
            i_2 += 0x1c30
            
            if (i_2 u>= eax_21)
                goto label_5eee06
    
    i_3 = i_2
    
    if (i_2 != 0xffffffff)
        do
            if (*(i_2 + 0x2c) == 3)
                int32_t edx_9 = *(i_2 + 0x5c)
                
                if (edx_9 - 7 u<= 0x40 && (i_4 == 0 || edx_9 s> *(i_4 + 0x5c)))
                    i_4 = i_2
            
            eax_21 = sub_6376d0(&data_b809e0, &i_3)
            i_2 = i_3
        while (i_2 != 0xffffffff)
        
        if (i_4 != 0)
            return *(i_4 + 0x1c28)
    
    var_2c_2 = "NextCard"
    var_30_1 = 0x6d0c
    ecx_2 = "highest"
    var_34_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    int32_t ecx_3 = 0xa
    void* eax_24 = &data_b821cc
    
    while (*eax_24 != 0)
        eax_24 += 0x10
        ecx_3 += 1
        
        if (eax_24 s> 0xb8220c)
            break
    
    void* eax_25 = &data_b8221c
    int32_t ecx_4 = 0
    
    while (*eax_25 != 0)
        eax_25 += 0x10
        ecx_4 += 1
        
        if (eax_25 s> 0xb8225c)
            break
    
    int32_t ebx_1 = 0
    void* eax_26 = &data_b8227c
    
    while (*(eax_26 - 0x10) != 0)
        if (*eax_26 == 0)
            ebx_1 += 1
            break
        
        if (*(eax_26 + 0x10) == 0)
            ebx_1 += 2
            break
        
        ebx_1 += 3
        eax_26 += 0x30
        
        if (ebx_1 s> 0x20)
            break
    
    bool cond:1_1 = sub_4aec30() != 0
    eax_21 = data_cc8dc0
    
    if (eax_21 != 0)
        if (*(eax_21 + 0x38) == 0)
            var_1c.b = 0
        else
            eax_21 = sub_5cb070()
            var_1c.b = 1
            
            if (eax_21 != 0)
                var_1c.b = 0
        
        eax_21 = sub_5d3300(sub_5d2120(eax_21, ecx_4, ecx_3, ebx_1, cond:1_1, var_1c.b))
        
        if (eax_21 u> 6)
            var_2c_2 = "NextCard"
            var_30_1 = 0x6cad
            ecx_2 = "Halt"
        else
            void* ecx_7
            
            switch (eax_21)
                case nullptr, 1
                    ecx_7 = 0x18
                case 2, 3, 4
                    ecx_7 = 0x19
                case 5, 6
                    ecx_7 = 0x1a
            
            while (true)
                if (esi_1 == ecx_7 - 1 && i_4 == 1)
                    esi_1 = i_4 + 0x21
                else if (esi_1 == 0x21)
                    if (i_4 != 1)
                        goto label_5eec1c
                    
                    esi_1 = i_4 + 0x12
                else if (esi_1 != 0x26 || i_4 != 1)
                label_5eec1c:
                    
                    if (esi_1 != ecx_7)
                        if (i_4 != 0)
                        label_5eec43:
                            esi_1 += 1
                            goto label_5eec44
                        
                        if (esi_1 != 0x13)
                            if (esi_1 != 0x22)
                                esi_1 -= 1
                            else
                                esi_1 = ecx_7 - 1
                            
                            goto label_5eec44
                        
                        esi_1 = i_4 + 0x21
                    else
                        if (i_4 != 0)
                            goto label_5eec43
                        
                        esi_1 = i_4 + 0x26
                else
                    esi_1 = ecx_7
                label_5eec44:
                    eax_21 = esi_1 - 0x13
                    
                    if (eax_21 u> 0x13)
                        var_2c_2 = "NextCard"
                        var_30_1 = 0x6cc3
                        ecx_2 = "where >= CW_BOARD_KINGDOM_START && where <= CW_BOARD_LANDSCAPE_END"
                        break
                
                eax_20 = esi_1 << 4
                
                if (*(eax_20 + 0xb81ffc) != 0)
                    goto label_5eeab2
        
        var_34_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else
        var_2c_2 = "GetLocalSettings"
        var_30_1 = 0x5fb
        var_34_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx_2 = "gGameSettings.localSettings"
sub_63b870(eax_21, &data_801800, ecx_2, var_34_1, var_30_1, var_2c_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
