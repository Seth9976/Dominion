// 函数: sub_4c3a40
// 地址: 0x4c3a40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t* ecx = __chkstk(0x50b4)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* i = data_cc8d5c
char var_5076 = 0
int32_t* ebx = ecx
int32_t* var_50a0 = ebx
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
char const* const ecx_1

if (i != 0)
    int32_t var_50ac
    void* var_50a8
    int32_t* var_5088
    void* var_5084
    
    if (*(i + 0x5068) != 1 || ebx[0xb] == 2)
    label_4c3f1e:
        
        if (i == 0)
            goto label_4c3a72
        
        if (*(i + 0x5068) == 2 && ebx[0xb] != 2)
            void* eax_26 = *ebx
            int32_t edi_5 = 0
            ebx[0xb] = 2
            int32_t esi_5 = 0
            var_5084 = eax_26
            
            while (true)
                if (*(sub_61dad0() + esi_5 + 8) == var_5084)
                    var_5084 = sub_61dad0()
                    void* i_3 = nullptr
                    void* var_507c_3 = sub_61dad0() + edi_5 * 0xc + 8
                    
                    if (ebx[0x46a] s> 0)
                        void* esi_9 = &ebx[0x19]
                        
                        do
                            if (*(esi_9 - 8) == 1)
                                int32_t eax_42
                                int32_t edx_18
                                eax_42, edx_18 =
                                    sub_4c3550(&var_50a8, *esi_9, ebx, &var_50a8, &var_50ac)
                                void* var_1c_3 = var_507c_3
                                edx_18.b = eax_42.b
                                sub_4c3970(eax_42, edx_18, ebx)
                                
                                if (sub_61dba0(var_5084, &var_50a0) != 0)
                                    sub_4b98a0(var_507c_3, edi_5, var_50a0, *(var_507c_3 + 4), 
                                        *(var_507c_3 + 8))
                            
                            esi_9 += 0x22c
                            i = i_3 + 1
                            i_3 = i
                        while (i s< ebx[0x46a])
                    
                    break
                
                esi_5 += 0xc
                edi_5 += 1
                
                if (esi_5 s>= 0x78)
                    int32_t eax_28 = *ebx
                    int32_t i_1 = 0
                    int64_t var_50
                    __builtin_memset(&var_50, 0, 0x40)
                    int32_t var_54 = eax_28
                    
                    if (ebx[0x46a] s> 0)
                        void* esi_6 = &ebx[0x18]
                        
                        do
                            int32_t eax_29 = 0
                            int32_t var_507c_2 = 0
                            
                            if (*(esi_6 - 4) == 1)
                                eax_29 = *esi_6
                                var_507c_2 = eax_29
                            
                            int32_t edx_15 = *(esi_6 + 4)
                            *(&var_50 + (i_1 << 2)) = eax_29
                            int32_t* var_14_12 = &var_5084
                            int32_t* var_18_2 = &var_50a0
                            int32_t var_1c_2 = 0
                            void* eax_31 = sub_5f1ae0(&var_50a0, edx_15, ebx)
                            void* ecx_32 = data_cc8dc8
                            var_5084 = eax_31
                            int64_t var_30
                            *(&var_30 + (i_1 << 2)) = eax_31
                            
                            if (var_507c_2 == *(sub_4d8f30(*(ecx_32 + 0x1e1a4)) + 0x4250)
                                    && var_5084 == 1
                                    && (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42d4) & 1) == 0)
                                void* eax_34 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                                *(eax_34 + 0x42d4) |= 1
                                data_cc8dc8
                                sub_4d8ad0(esi_6)
                            
                            i_1 += 1
                            esi_6 += 0x22c
                        while (i_1 s< ebx[0x46a])
                    
                    i = data_cc8d5c
                    
                    if (i == 0)
                        goto label_4c3a72
                    
                    i = *(i + 0x14)
                    void* ecx_40 = data_147abf4
                    
                    if (i != 0)
                        uint32_t edx_16 = zx.d(i.w)
                        
                        if (edx_16 u< *(ecx_40 + 4))
                            void* esi_8 = edx_16 * 0x64 + *ecx_40
                            
                            if (*(esi_8 + 0x60) == i && esi_8 != 0)
                                int32_t var_14_13 = 0xf42b8
                                sub_689e00(i, 0x44, esi_8 + 0x50)
                                sub_689be0(&var_54, 0x44, esi_8 + 0x50, &var_54)
                    
                    goto label_4c41bf
        
    label_4c41bf:
        void* i_4
        
        if (ebx[5] == 2)
            i_4 = nullptr
        
        if (ebx[5] != 2 || ebx[0x46a] s<= 0)
        label_4c4372:
            i.b = var_5076
            CookieCheckFunction(i)
            return i
        
        int32_t* esi_10 = &ebx[0x18]
        var_5088 = esi_10
        
        while (true)
            char eax_47 = sub_4c3550(&var_50a0, esi_10[1], ebx, &var_50a0, &var_5084)
            char ecx_49 = not.b(ebx[8].b) & 1
            int32_t eax_50 = (ebx[8] u>> 0x1c) - 1
            i = esi_10[-1]
            
            if (i s> 0x3e8)
                if (i != 0x3e9)
                label_4c4386:
                    char const* const var_14_25 = "ActiveGameComplete_Stats"
                    int32_t var_18_11 = 0x1762
                    break
            else if (i == 0x3e8)
                char var_5075_4
                
                if (eax_47 != 0)
                    var_5075_4 = 1
                
                if (eax_47 == 0 || ecx_49 == 0)
                    var_5075_4 = 0
                
                int32_t edi_7 = ebx[6]
                void* eax_56 = sub_4d8f30(*esi_10)
                int32_t eax_58
                int32_t edx_27
                edx_27:eax_58 = sx.q(sub_4c38b0(eax_56, eax_50, var_5075_4, 0))
                int32_t var_14_24 = edx_27
                sub_4bac10(eax_58, edi_7 + 0x10c8e0, eax_56, eax_58)
                data_cc8dc8
                sub_4d8ad0(eax_56)
                esi_10 = var_5088
            else
                if (i u> 3)
                    goto label_4c4386
                
                switch (i)
                    case 1
                        void* eax_51 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                        
                        if (*esi_10 == *(eax_51 + 0x4250))
                            char var_5075_3
                            
                            if (eax_47 != 0)
                                var_5075_3 = 1
                            
                            if (eax_47 == 0 || ecx_49 == 0)
                                var_5075_3 = 0
                            
                            int32_t edi_6 = ebx[6]
                            void* eax_53 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                            int32_t eax_55
                            int32_t edx_24
                            edx_24:eax_55 = sx.q(sub_4c38b0(eax_53, eax_50, var_5075_3, 0))
                            int32_t var_14_22 = edx_24
                            sub_4bac10(eax_55, edi_6 + 0x10c8e0, eax_53, eax_55)
                            data_cc8dc8
                            sub_4d8ad0(eax_53)
                            esi_10 = var_5088
            
            esi_10 = &esi_10[0x8b]
            i = i_4 + 1
            var_5088 = esi_10
            i_4 = i
            
            if (i s>= ebx[0x46a])
                goto label_4c4372
    else
        ebx[0xb] = 2
        sub_4da580(ecx, *(i + 0x506c))
        i = ebx[0x46a] - 2
        
        if (i u<= 4)
            int32_t var_5094_1
            
            switch (i)
                case nullptr
                    var_5094_1 = 0x3e9
                case 1
                    var_5094_1 = 0x3ee
                case 2
                    var_5094_1 = 0x3f3
                case 3
                    var_5094_1 = 0x3f8
                case 4
                    var_5094_1 = 0x3fd
            
            int32_t eax_3 = 0
            void* esi = &ebx[0x19]
            int32_t var_5080_1 = 0
            void* var_509c_1 = esi
            
            while (true)
                if (*(esi - 8) == 0x3e8)
                    int32_t var_50a4
                    char eax_5 = sub_4c3550(&var_50a4, *esi, ebx, &var_50a4, &var_5088)
                    void* esi_1 = data_cc8dc8
                    int32_t edi_1 = zx.d(eax_5) ^ 1
                    int32_t eax_6 = 0
                    int32_t ecx_3 = *(esi_1 + 0x1e1a0)
                    
                    if (ecx_3 s> 0)
                        do
                            if (*(esi_1 + 0x42b0) == *(esi - 4))
                                if (esi_1 != 0)
                                    if (edi_1 == 0)
                                        *(esi_1 + 0x42d4) |= 1
                                        data_cc8dc8
                                        sub_4d8ad0(esi_1)
                                    
                                    sub_4baa90(esi_1, edi_1 + var_5094_1)
                                
                                break
                            
                            eax_6 += 1
                            esi_1 += 0x7868
                        while (eax_6 s< ecx_3)
                    
                    int32_t edi_2 = *ebx
                    int32_t esi_2 = 0
                    int32_t var_5098_1 = 0
                    
                    while (true)
                        if (*(sub_61dad0() + esi_2 + 8) == edi_2)
                            void* eax_10 = sub_61dad0()
                            void* eax_11 = sub_61dad0()
                            int32_t esi_3 = var_5098_1
                            void* edi_3 = eax_11 + ((esi_3 + ((esi_3 + 1) << 1)) << 2)
                            sub_4c3970(eax_11, eax_5, ebx, edi_3)
                            
                            if (*(edi_3 + 4) != 3)
                                if (esi_3 != 9)
                                    *(sub_61dad0() + esi_3 * 0xc + 0x18) = 2
                                else
                                    void* esi_4 = *(edi_3 + 8)
                                    int32_t ebx_1 = 0
                                    
                                    for (int32_t i_2 = 0; i_2 s< 0x78; i_2 += 0xc)
                                        void* eax_12 = sub_61dad0()
                                        int32_t eax_13 = ebx_1 + 1
                                        
                                        if (*(eax_12 + i_2 + 0xc) != 5)
                                            eax_13 = ebx_1
                                        
                                        ebx_1 = eax_13
                                        void* eax_14 = *(eax_12 + i_2 + 0x10)
                                        
                                        if (eax_14 != esi_4)
                                            void* edx_7
                                            
                                            if (eax_14 == 0xffffffff)
                                                edx_7 = nullptr
                                            else if (eax_14 == 3)
                                                edx_7 = 1
                                            else
                                                edx_7 = eax_14 + 2
                                            
                                            void* ecx_14
                                            
                                            if (esi_4 == 0xffffffff)
                                                ecx_14 = nullptr
                                            else if (esi_4 == 3)
                                                ecx_14 = 1
                                            else
                                                ecx_14 = esi_4 + 2
                                            
                                            if (edx_7 s< ecx_14)
                                                esi_4 = eax_14
                                    
                                    var_50ac = ebx_1
                                    ebx = var_50a0
                                    
                                    if (sub_61dba0(eax_10, &var_50a8) == 0)
                                        void* eax_16 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                                        int32_t var_5074
                                        sub_4e6680(eax_16 + 0x3510, eax_16 + 0x350c, &var_5074, 
                                            eax_16 + 0x3510)
                                        int32_t edi_4 = 0
                                        int32_t var_5070
                                        
                                        if (var_5074 == 0)
                                            edi_4 = var_5070
                                        void* eax_18 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                                        var_50a8 = eax_18
                                        int32_t ecx_21 = 0
                                        void* eax_19 = eax_18 + 0x35c0
                                        
                                        while (true)
                                            int32_t edx_11 = *(eax_19 + 4)
                                            
                                            if (edx_11 == 0)
                                                *eax_19 = esi_4
                                                esi_4 = var_50a8 + ecx_21 * 0x14
                                                *(esi_4 + 0x35bc) = edi_4
                                            else if (*eax_19 != esi_4 || *(eax_19 - 4) != edi_4)
                                                ecx_21 += 1
                                                eax_19 += 0x14
                                                
                                                if (ecx_21 s>= 0xa0)
                                                    break
                                                
                                                continue
                                            else
                                                esi_4 = var_50a8 + ecx_21 * 0x14
                                            
                                            int32_t edx_12 = var_50ac
                                            *(esi_4 + 0x35c4) = edx_11 + 1
                                            int32_t ecx_24 = edx_12
                                            int32_t eax_23 = *(esi_4 + 0x35cc)
                                            
                                            if (eax_23 s> edx_12)
                                                ecx_24 = eax_23
                                            
                                            *(esi_4 + 0x35cc) = ecx_24
                                            
                                            if (edx_12 == 0xa)
                                                *(esi_4 + 0x35c8) += 1
                                            
                                            break
                                        
                                        data_cc8dc8
                                        sub_4d8ad0(esi_4)
                                    
                                    esi_3 = var_5098_1
                            
                            void* eax_24 = sub_61dba0(eax_10, &var_5084)
                            
                            if (eax_24.b == 0)
                                data_cc8dc8
                                sub_4d8ad0(esi_3)
                            else
                                sub_4b98a0(eax_24, esi_3, var_5084, *(edi_3 + 4), *(edi_3 + 8))
                            
                            goto label_4c3eee
                        
                        var_5098_1 += 1
                        esi_2 += 0xc
                        
                        if (esi_2 s>= 0x78)
                            break
                    
                    if ((ebx[8].b & 4) != 0)
                        void var_50b8
                        i = sub_4ba400(&var_50b8)
                        
                        if (i.b == 0)
                            char const* const var_14_16 = "ActiveGameComplete_Stats"
                            int32_t var_18_4 = 0x16ca
                            ecx_1 = "retval"
                            goto label_4c4395
                        
                        void* ecx_7 = data_cc8d5c
                        
                        if (ecx_7 == 0)
                            goto label_4c3a72
                        
                        void* eax_8 = sub_4badc0(ecx_7 + 0x75b8, &var_50b8)
                        int32_t ecx_9
                        
                        if (eax_8 != 0)
                            ecx_9 = *eax_8
                        else
                            ecx_9 = 0
                        
                        if (eax_5 != 0)
                            eax_8 = ebx[8]
                        
                        if (eax_5 == 0 || (eax_8.b & 1) != 0)
                            sub_4b9970(eax_8, 1, ecx_9, nullptr, 0)
                            var_5076 = 1
                        else
                            i = (eax_8 u>> 0x1c) - 1
                            
                            if (i u> 3)
                                char const* const var_14_15 = "ActiveGameComplete_Stats"
                                int32_t var_18_3 = 0x16de
                                goto label_4c4390
                            
                            switch (i)
                                case nullptr
                                    sub_4b9970(i, 4, ecx_9, var_5088, var_50a4)
                                    var_5076 = 1
                                case 1
                                    sub_4b9970(i, 7, ecx_9, var_5088, var_50a4)
                                    var_5076 = 1
                                case 2
                                    sub_4b9970(i, 0xa, ecx_9, var_5088, var_50a4)
                                    var_5076 = 1
                                case 3
                                    sub_4b9970(i, 2, ecx_9, var_5088, var_50a4)
                                    var_5076 = 1
                    
                label_4c3eee:
                    eax_3 = var_5080_1
                    esi = var_509c_1
                
                eax_3 += 1
                esi += 0x22c
                var_5080_1 = eax_3
                var_509c_1 = esi
                
                if (eax_3 s>= ebx[0x46a])
                    i = data_cc8d5c
                    break
            
            goto label_4c3f1e
        
        char const* const var_14_17 = "ActiveGameComplete_Stats"
        int32_t var_18_5 = 0x1678
label_4c4390:
    ecx_1 = "Halt"
label_4c4395:
    char const* const var_1c_4 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
else
label_4c3a72:
    char const* const var_14_1 = "GetClient"
    int32_t var_18_1 = 0x7b
    char const* const var_1c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"

sub_63b870(i, &data_801800, ecx_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
