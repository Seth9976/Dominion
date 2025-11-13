// 函数: sub_4b5dc0
// 地址: 0x4b5dc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?wait@event@Concurrency@@QAEII@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** i_11 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** i_21 = arg1
int32_t* i_24 = data_cc8d5c
char const* const var_70_1
int32_t var_6c_1
char const* const var_68_5
char* ecx

if (i_24 == 0)
label_4b5df6:
    var_68_5 = "GetClient"
    var_6c_1 = 0x7b
    var_70_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"
label_4b7abf:
    sub_63b870(i_11, &data_801800, ecx, var_70_1, var_6c_1, var_68_5)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

i_11 = *arg1
void* edx_1 = data_147abf4

if (i_11 == 0)
    goto label_4b747c

i_11 = zx.d(i_11.w)

if (i_11 u>= *(edx_1 + 4))
    goto label_4b747c

void* ecx_2 = i_11 * 0x64 + *edx_1

if (*(ecx_2 + 0x60) != *arg1)
    goto label_4b747c

int32_t eax_3

if (ecx_2 != 0)
    eax_3 = *(ecx_2 + 0x24)

if (ecx_2 != 0 && (eax_3 == 2 || eax_3 == 3))
    i_11 = arg1[1]
    
    if (i_11 != 0x3ea)
        if (i_11 == 0xfa0)
            i_11 = *arg1
            
            if (i_11 != 0)
                uint32_t ecx_3 = zx.d(i_11.w)
                
                if (ecx_3 u< *(edx_1 + 4))
                    int128_t* ecx_5 = ecx_3 * 0x64 + *edx_1
                    
                    if (ecx_5[6].d == i_11 && ecx_5 != 0)
                        sub_6892c0(ecx_5)
                        uint32_t eax_4
                        eax_4.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_4
        else if (i_11 != 0xfa2)
            if (i_11 == 0x3eb || i_11 == 0xfa1)
                sub_63b5f0("analytics connect failed")
                uint32_t eax_6
                eax_6.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_6
            
            struct _EXCEPTION_REGISTRATION_RECORD** i_15 = i_11
            sub_63b5f0("Analytics unknown message type %d")
            uint32_t eax_5
            eax_5.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_5
    
    goto label_4b747c

int32_t eax_7 = arg1[1]

if (eax_7 s<= 0xf4242)
    if (eax_7 == 0xf4242)
        if (sub_695870(eax_7, &arg1[3], &arg1[3], data_1597d78, nullptr, arg1[2]).b != 0)
            sub_63d8d0(&i_24[8], arg1[5])
            int32_t ecx_20 = i_24[1]
            i_24[0x1d68] = *i_24
            i_24[0x1d69] = ecx_20
            
            switch (arg1[3])
                case nullptr
                    i_24[7] = 6
                    i_11.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return i_11
                case 1
                    i_24[7] = 4
                    i_11.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return i_11
                case 2
                    i_24[7] = 5
                    i_11.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return i_11
                case 3
                    i_24[7] = 1
                    i_11.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return i_11
                case 5
                    i_24[7] = 8
                    i_11.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return i_11
        
        goto label_4b747c
    
    if (eax_7 == 0x3ea)
        i_24[6] = 3
        int32_t eax_8
        eax_8.b = 1
        i_24[0x1d6c] = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    if (eax_7 == 0x3eb)
        i_24[6] = 0
        int32_t eax_9
        eax_9.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9
    
    if (eax_7 != 0x3ec)
        goto label_4b7a63
    
    ecx_2.b = 1
    i_24[6] = eax_7 - 0x3ec
    sub_4aeb40(ecx_2.b)
    
    if (i_24[7] != 6)
        goto label_4b747c
    
    i_24[7] = 0
    i_11.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return i_11

i_11 = eax_7 - 0xf4243

if (i_11 u> 0x29)
label_4b7a63:
    i_11.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return i_11

int128_t var_58
char* const var_4c
int32_t var_40
struct _EXCEPTION_REGISTRATION_RECORD** i_63
void** i_17
int32_t* i_9
int32_t* i_19
struct _EXCEPTION_REGISTRATION_RECORD** i_20
char* const i_22
char* i_23

switch (i_11)
    case nullptr
        edx_1.b = 0
        i_24[0x1da5] = 0
        i_24[0x1da6] = 0
        sub_4d46e0(9, edx_1.b)
        
        if (arg1[3] != 0)
            int32_t eax_119
            
            if (eax_119 == 1)
                i_24[7] = 3
                int32_t eax_121
                eax_121.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_121
            
            i_24[7] = 7
            int32_t eax_122
            eax_122.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_122
        
        void* eax_123 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        struct _EXCEPTION_REGISTRATION_RECORD** i_34 = i_21
        *(eax_123 + 0x424c) = i_34[4]
        *(eax_123 + 0x4250) = i_34[5]
        sub_63d8d0(eax_123 + 0x4254, &i_34[6])
        int32_t* i_59 = eax_123 + 0x4258
        sub_63d8d0(i_59, i_21 + 0x21)
        char* const ecx_189 = &data_801800
        *(eax_123 + 0x425c) = i_21[0x19]
        char* const edx_24 = &data_801800
        char* edi_15 = *(eax_123 + 4)
        i_20 = eax_123 + 4
        char* eax_128 = *i_59
        
        if (edi_15 != 0)
            edx_24 = edi_15
        
        if (eax_128 != 0)
            ecx_189 = eax_128
        
        int32_t eax_130
        
        while (true)
            eax_128.b = *ecx_189
            char temp15_1 = *edx_24
            bool c_1 = eax_128.b u< temp15_1
            
            if (eax_128.b == temp15_1)
                if (eax_128.b == 0)
                    eax_130 = 0
                    break
                
                eax_128.b = ecx_189[1]
                char temp18_1 = edx_24[1]
                c_1 = eax_128.b u< temp18_1
                
                if (eax_128.b == temp18_1)
                    ecx_189 = &ecx_189[2]
                    edx_24 = &edx_24[2]
                    
                    if (eax_128.b != 0)
                        continue
                    
                    eax_130 = 0
                    break
            
            eax_130 = sbb.d(eax_128, eax_128, c_1) | 1
            break
        
        if (eax_130 == 0 && edi_15 != 0 && edi_15 != &data_801800)
            i_59 = i_20
            
            if (data_cf65bc != eax_130 && *edi_15 != eax_130.b)
                char* eax_131 = sub_63d4e0(i_59)
                int32_t temp29_1 = *(eax_131 + 4)
                *(eax_131 + 4) -= 1
                
                if (temp29_1 == 1)
                    sub_64c080(eax_131, *(eax_131 + 0xc) + 0x10)
            
            *i_59 = &data_801800
        
        data_cc8dc8
        sub_4d8ad0(i_59)
        sub_4ba8f0()
        sub_4b97c0()
        void* eax_132
        eax_132.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_132
    case 1
        int32_t eax_142 = arg1[3]
        
        if (eax_142 == 0)
            goto label_4b747c
        
        if (eax_142 == 1)
            void* eax_150 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            i_24 = eax_150 + 4
            sub_63d850(eax_150 + 0x4258, i_24)
            char* eax_151 = *i_24
            
            if (eax_151 != 0 && eax_151 != &data_801800)
                if (data_cf65bc != 0 && *eax_151 != 0)
                    char* eax_152 = sub_63d4e0(i_24)
                    int32_t temp19_1 = *(eax_152 + 4)
                    *(eax_152 + 4) -= 1
                    
                    if (temp19_1 == 1)
                        sub_64c080(eax_152, *(eax_152 + 0xc) + 0x10)
                
                *i_24 = &data_801800
            
            goto label_4b60da
        
        i_11 = eax_142 - 2
        
        if (eax_142 != 2)
            var_68_5 = "GameClientHandleMessage"
            var_6c_1 = 0xfcf
            goto label_4b7ab0
        
        void* eax_144 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        char* eax_145 = *(eax_144 + 0x4258)
        
        if (eax_145 != 0 && eax_145 != &data_801800)
            if (data_cf65bc != 0 && *eax_145 != 0)
                char* eax_146 = sub_63d4e0(eax_144 + 0x4258)
                int32_t temp20_1 = *(eax_146 + 4)
                *(eax_146 + 4) -= 1
                
                if (temp20_1 == 1)
                    sub_64c080(eax_146, *(eax_146 + 0xc) + 0x10)
            
            *(eax_144 + 0x4258) = &data_801800
        
        char* eax_147 = *(eax_144 + 4)
        
        if (eax_147 != 0 && eax_147 != &data_801800)
            if (data_cf65bc != 0 && *eax_147 != 0)
                char* eax_148 = sub_63d4e0(eax_144 + 4)
                int32_t temp24_1 = *(eax_148 + 4)
                *(eax_148 + 4) -= 1
                
                if (temp24_1 == 1)
                    sub_64c080(eax_148, *(eax_148 + 0xc) + 0x10)
            
            *(eax_144 + 4) = &data_801800
        
        *(eax_144 + 0x425c) &= 0xfffffffe
        data_cc8dc8
        sub_4d8ad0(eax_144)
        char* eax_149
        eax_149.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_149
    case 2
        i_11 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        int32_t ecx_242 = arg1[3]
        i_24 = i_11
        
        if (ecx_242 != 0)
            if (ecx_242 == 1)
                data_8dbc4c = 4
                i_11.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return i_11
            
            var_68_5 = "GameProfileHandleEmailCodeResponse"
            var_6c_1 = 0x1083
            var_70_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
            ecx = "Halt"
            goto label_4b7abf
        
        data_8dbc4c = 0
        sub_63d8d0(&i_24[0x1096], &arg1[4])
        char* eax_154 = i_24[1]
        
        if (eax_154 != 0 && eax_154 != &data_801800)
            if (data_cf65bc != 0 && *eax_154 != 0)
                char* eax_155 = sub_63d4e0(&i_24[1])
                int32_t temp17_1 = *(eax_155 + 4)
                *(eax_155 + 4) -= 1
                
                if (temp17_1 == 1)
                    sub_64c080(eax_155, *(eax_155 + 0xc) + 0x10)
            
            i_24[1] = &data_801800
        
        goto label_4b60da
    case 3
        sub_4c1f50(&arg1[3])
        char* eax_141
        eax_141.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_141
    case 4
        if (sub_695870(i_11, &arg1[3], &arg1[3], data_1597ce8, nullptr, arg1[2]).b == 0)
            goto label_4b747c
        
        i_11 = arg1[8]
        i_17 = i_11
        void** i_56
        
        if (i_11 != 0)
            if (arg1[3] != 0xffffffff)
                sub_4b4440(&arg1[3])
                void* eax_168
                eax_168.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_168
            
            int32_t eax_164 = arg1[9]
            i_56 = data_cc8d5c
            i_11 = arg1[0xa]
            int32_t i = arg1[4]
            i_9 = i_11
            
            if (i_56 == 0)
                goto label_4b5df6
            
            int32_t esi_21 = i_56[0x140a]
            int32_t ecx_261 = 0
            
            if (esi_21 s<= 0)
                goto label_4b747c
            
            i_11 = &i_56[0xb]
            
            while (*i_11 != i)
                ecx_261 += 1
                i_11 = &i_11[8]
                
                if (ecx_261 s>= esi_21)
                    i_11.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return i_11
            
            if (ecx_261 == 0xffffffff)
                goto label_4b747c
            
            i_56[ecx_261 * 8 + 0xe] = i_17
            i_11 = (ecx_261 + 2) << 5
            *(i_11 + i_56) = eax_164
            *(i_11 + i_56 + 4) = i_9
        else
            void** i_48 = data_cc8d5c
            int32_t i_1 = arg1[4]
            i_17 = i_48
            
            if (i_48 == 0)
                goto label_4b5df6
            
            int32_t edx_53 = i_48[0x140a]
            int32_t edi_17 = 0
            
            if (edx_53 s<= 0)
                goto label_4b747c
            
            i_11 = &i_48[0xb]
            
            while (*i_11 != i_1)
                edi_17 += 1
                i_11 = &i_11[8]
                
                if (edi_17 s>= edx_53)
                    i_11.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return i_11
            
            if (edi_17 == 0xffffffff)
                goto label_4b747c
            
            i_48[0x140a] = edx_53 - 1
            void* esi_20 = &i_48[(edx_53 - 1) * 8]
            i_48[edi_17 * 8 + 0xa] = *(esi_20 + 0x28)
            i_48[edi_17 * 8 + 0xb] = *(esi_20 + 0x2c)
            sub_63d850(&i_48[0xc + edi_17 * 8], esi_20 + 0x30)
            i_56 = i_17
            i_56[edi_17 * 8 + 0xd] = *(esi_20 + 0x34)
            i_56[edi_17 * 8 + 0xe] = *(esi_20 + 0x38)
            int32_t ecx_258 = *(esi_20 + 0x44)
            i_56[edi_17 * 8 + 0x10] = *(esi_20 + 0x40)
            i_56[edi_17 * 8 + 0x11] = ecx_258
        
        i_56[0x140b].b = 0
    label_4b747c:
        i_11.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return i_11
    case 5, 0x18, 0x28
        goto label_4b7a63
    case 6
        sub_4b42a0(arg1[3], &arg1[5])
        int32_t* eax_156
        eax_156.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_156
    case 7
        if (sub_695870(i_11, &arg1[3], &arg1[3], data_1597d00, nullptr, arg1[2]).b == 0)
            goto label_4b747c
        
        sub_4b48f0()
        uint32_t eax_185
        eax_185.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_185
    case 8
        if (sub_695870(&arg1[3], &arg1[3], &arg1[3], data_1597d10, nullptr, arg1[2]).b == 0)
            goto label_4b747c
        
        i_11 = sub_4b50b0(arg1[3])
        i_17 = i_11
        
        if (i_11 == 0)
            goto label_4b747c
        
        void* ecx_306 = data_cc8d5c
        
        if (ecx_306 == 0)
            goto label_4b5df6
        
        int32_t* i_64 = sub_4bb050(ecx_306 + 0x507c, i_11)
        bool cond:9_1 = arg1[7] != 1
        int32_t* i_49 = i_64
        i_19 = i_49
        
        if (cond:9_1)
            goto label_4b786a
        
        int32_t* esi_27 = arg1[5]
        
        if (*(sub_4d5db0(i_49, *esi_27) + 0xc) s>= esi_27[5])
            i_49 = i_19
        label_4b786a:
            int32_t var_30_9 = 0
            
            if (arg1[7] s> 0)
                void* i_14 = nullptr
                i_9 = nullptr
                
                while (true)
                    void* esi_29 = arg1[5] + i_14
                    i_11 = sub_4d5db0(i_49, *esi_29)
                    
                    if (i_11[3] s< *(esi_29 + 0x14))
                        var_68_5 = "AddGameLogNetwork_Old"
                        var_6c_1 = 0xc74
                        ecx = "log.logSizeWritten >= playerLogInfo.insertPoint"
                        break
                    
                    sub_4b4be0(i_11, &i_19[0x49e + *esi_29 * 4], i_11, esi_29)
                    int32_t ecx_313 = var_30_9 + 1
                    i_14 = &i_9[8]
                    var_30_9 = ecx_313
                    bool cond:15_1 = ecx_313 s< arg1[7]
                    i_49 = i_19
                    i_9 = i_14
                    
                    if (not(cond:15_1))
                        goto label_4b78c3
                
                goto label_4b7ab5
            
        label_4b78c3:
            i_11 = data_cc8d5c
            
            if (i_11 == 0)
                goto label_4b5df6
        else
            i_11 = data_cc8d5c
        
        if (arg1[7] s<= 1)
            goto label_4b747c
        
        if (i_11 == 0)
            goto label_4b5df6
        
        void** i_50 = i_17
        i_11[0x1411] = 6
        i_11[0x141c] = 2
        i_11[0x141d] = i_50
        i_11.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return i_11
    case 9
        sub_4b5140(&arg1[3])
        int32_t* eax_186
        eax_186.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_186
    case 0xa
        i_24[4] = arg1[3]
        int32_t eax_169
        eax_169.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_169
    case 0xb
        i_11 = sub_4b50b0(arg1[3])
        
        if (i_24[0x141a] == 2 && i_24[0x141b] == i_11)
            void* eax_133 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            void** i_47 = arg1[4]
            i_17 = i_47
            int32_t eax_134 = *(eax_133 + 0x4250)
            
            if (eax_134 == i_47 && arg1[5] != 1)
                sub_63b870(eax_134, &data_801800, "response.forfeitType == FORFEITTYPE_TIMER", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0xf89, 
                    "GameClientHandleMessage")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t* eax_135 = sub_4b9480()
            void* eax_136 = sub_4b51d0(eax_135, arg1[4])
            sub_4b06c0(&i_9, &eax_135[2], &i_19, eax_136, &i_9)
            int32_t var_8_7 = 4
            i_22 = &data_801800
            i_23 = &data_801800
            int32_t* i_65 = &data_801800
            var_8_7.b = 6
            int32_t* i_35 = i_19
            struct _EXCEPTION_REGISTRATION_RECORD** i_60 = i_21
            
            if (i_35 != 0)
                i_65 = i_35
            
            sub_4b5b20(&i_22, eax_134 == i_47, i_60[5], i_65, &i_22, &i_23)
            int32_t ecx_202 = i_60[5] - 1
            int32_t ecx_203 = neg.d(ecx_202)
            sub_618820(sbb.d(ecx_203, ecx_203, ecx_202 != 0) + 6, *(eax_136 + 0x1c))
            void** ecx_206 = &i_21
            
            if (eax_134 != i_17)
                sub_63d720(ecx_206, &data_801800)
                var_8_7.b = 0xb
                sub_63d720(&i_20, &data_801800)
                var_8_7.b = 0xc
                data_8db6b0 = 0x20
                sub_63d850(&data_8db750, &i_22)
                sub_63d850(&data_8db754, &i_23)
                sub_63d850(&data_8db758, &i_20)
                sub_63d850(&data_8db75c, &i_21)
                data_8db760 = j_sub_4c44f0
                data_8db764 = 0
                var_8_7.b = 0xd
                
                if (data_cf65bc != 0)
                    i_11 = i_20
                    
                    if (i_11 != 0 && *i_11 != 0)
                        i_11 = sub_63d4e0(&i_20)
                        int32_t temp22_1 = i_11[1]
                        i_11[1] -= 1
                        
                        if (temp22_1 == 1)
                            sub_64c080(i_11, &i_11[3][2])
                
                var_8_7.b = 0xe
            else
                sub_63d720(ecx_206, &data_801800)
                var_8_7.b = 7
                sub_63d720(&i_20, &data_801800)
                var_8_7.b = 8
                data_8db6b0 = 0x20
                sub_63d850(&data_8db750, &i_22)
                sub_63d850(&data_8db754, &i_23)
                sub_63d850(&data_8db758, &i_20)
                sub_63d850(&data_8db75c, &i_21)
                data_8db760 = j_sub_4c44f0
                data_8db764 = 0
                var_8_7.b = 9
                
                if (data_cf65bc != 0)
                    i_11 = i_20
                    
                    if (i_11 != 0 && *i_11 != 0)
                        i_11 = sub_63d4e0(&i_20)
                        int32_t temp23_1 = i_11[1]
                        i_11[1] -= 1
                        
                        if (temp23_1 == 1)
                            sub_64c080(i_11, &i_11[3][2])
                
                var_8_7.b = 0xa
            
            if (data_cf65bc != 0)
                i_11 = i_21
                
                if (i_11 != 0 && *i_11 != 0)
                    i_11 = sub_63d4e0(&i_21)
                    int32_t temp27_1 = i_11[1]
                    i_11[1] -= 1
                    
                    if (temp27_1 == 1)
                        sub_64c080(i_11, &i_11[3][2])
            
            var_8_7.b = 0xf
            
            if (data_cf65bc != 0)
                i_11 = i_23
                
                if (i_11 != 0 && *i_11 != 0)
                    i_11 = sub_63d4e0(&i_23)
                    int32_t temp30_1 = i_11[1]
                    i_11[1] -= 1
                    
                    if (temp30_1 == 1)
                        sub_64c080(i_11, &i_11[3][2])
            
            var_8_7.b = 0x10
            
            if (data_cf65bc != 0)
                i_11 = i_22
                
                if (i_11 != 0 && *i_11 != 0)
                    i_11 = sub_63d4e0(&i_22)
                    int32_t temp31_1 = i_11[1]
                    i_11[1] -= 1
                    
                    if (temp31_1 == 1)
                        sub_64c080(i_11, &i_11[3][2])
            
            int32_t var_8_8 = 0x11
            
            if (data_cf65bc != 0)
                i_11 = i_19
                
                if (i_11 != 0 && *i_11 != 0)
                    i_11 = sub_63d4e0(&i_19)
                    int32_t temp34_1 = i_11[1]
                    i_11[1] -= 1
                    
                    if (temp34_1 == 1)
                        sub_64c080(i_11, &i_11[3][2])
                        int32_t* eax_140
                        eax_140.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_140
        
        goto label_4b747c
    case 0xc
        if (arg1[3] != 0)
            var_68_5 = "ClientGotLinkResponse"
            var_6c_1 = 0x87
            goto label_4b7ab0
        
        *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42b4) = 2
        data_cc8dc8
        sub_4d8ad0(i_24)
        sub_4aeb40(1)
        int32_t eax_190
        eax_190.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_190
    case 0xd, 0xe
        goto label_4b747c
    case 0xf
        i_24 = &arg1[3]
        
        if (sub_695870(i_11, i_24, i_24, data_1597cf0, nullptr, arg1[2]).b == 0)
            goto label_4b747c
        
        void* eax_104 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        
        if (i_24[9] != 4)
            sub_4d8f80(eax_104, i_24)
            goto label_4b60da
        
        int32_t ecx_165 = *(eax_104 + 0x56d8)
        int32_t edx_21 = 0
        void* i_2 = i_24[6]
        *(eax_104 + 0x7450) = 0
        
        if (ecx_165 s> 0)
            void* eax_105 = eax_104 + 0x42d8
            
            while (*eax_105 != i_2)
                edx_21 += 1
                eax_105 += 0x28
                
                if (edx_21 s>= ecx_165)
                    data_cc8dc8
                    sub_4d8ad0(i_2)
                    char* eax_106
                    eax_106.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_106
            
            *(eax_104 + 0x56d8) = ecx_165 - 1
            i_2 = eax_104 + ((edx_21 * 5 + 0x85b) << 3)
            void* edx_22 = eax_104 + (((ecx_165 - 1) * 5 + 0x85b) << 3)
            *i_2 = *edx_22
            *(i_2 + 4) = *(edx_22 + 4)
            *(i_2 + 8) = *(edx_22 + 8)
            *(i_2 + 0xc) = *(edx_22 + 0xc)
            int32_t ecx_170 = *(edx_22 + 0x14)
            *(i_2 + 0x10) = *(edx_22 + 0x10)
            *(i_2 + 0x14) = ecx_170
            int32_t ecx_171 = *(edx_22 + 0x1c)
            *(i_2 + 0x18) = *(edx_22 + 0x18)
            *(i_2 + 0x1c) = ecx_171
            sub_63d850(i_2 + 0x20, edx_22 + 0x20)
        
        data_cc8dc8
        sub_4d8ad0(i_2)
        char* eax_118
        eax_118.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_118
    case 0x10
        i_11 = sub_4b50b0(arg1[4])
        void* ecx_272 = data_cc8d5c
        i_17 = i_11
        
        if (ecx_272 == 0)
            goto label_4b5df6
        
        int32_t* eax_170 = sub_4bb050(ecx_272 + 0x507c, i_11)
        i_11 = arg1[5]
        
        if (i_11 - 1 u> 4)
            var_68_5 = "GameUndoHandleRequest"
            var_6c_1 = 0xc03
        label_4b7ab0:
            ecx = "Halt"
            goto label_4b7ab5
        
        switch (i_11)
            case 1
                eax_170[0x4c5] = arg1[3]
                eax_170[0x4c4] = arg1[5]
                eax_170[0x4c6] = arg1[6]
            label_4b75db:
                eax_170[0x4c7] = arg1[7]
                eax_170[0x4c8] = arg1[8]
                int32_t eax_176
                eax_176.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_176
            case 2
                eax_170[0x4c4] = i_11
                goto label_4b75db
            case 3
                sub_4b4f50(&arg1[3], i_17)
                int32_t var_68_43 = arg1[6]
                int32_t var_6c_10 = arg1[4]
                sub_63b5f0("undid to decision %d %d")
                eax_170[0x4c4] = 3
                uint32_t eax_171
                eax_171.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_171
            case 4, 5
                int32_t ecx_280 = eax_170[0x4c4]
                
                if (ecx_280 == 1 || ecx_280 == 2)
                    eax_170[0x4c4] = i_11
                    i_11.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return i_11
        
        goto label_4b747c
    case 0x11
        if (sub_695870(i_11, &arg1[3], &arg1[3], data_1597d08, nullptr, arg1[2]).b == 0)
            goto label_4b747c
        
        i_11 = sub_4b50b0(arg1[3])
        struct _EXCEPTION_REGISTRATION_RECORD** i_18 = i_11
        
        if (i_11 == 0)
            goto label_4b747c
        
        void* ecx_289 = data_cc8d5c
        
        if (ecx_289 == 0)
            goto label_4b5df6
        
        int32_t* i_36 = sub_4bb050(ecx_289 + 0x507c, i_11)
        bool cond:8_1 = arg1[0xd].b != 0
        i_19 = i_36
        
        if (not(cond:8_1))
            void* i_37 = sub_4d5db0(i_36, arg1[5])
            int32_t edx_57 = arg1[0xa]
            i_17 = i_37
            int32_t ecx_292 = *(i_37 + 0xc)
            
            if (ecx_292 != edx_57)
                if (ecx_292 s> edx_57)
                    void* esi_25 = arg1[9]
                    
                    if (ecx_292 s< esi_25 + edx_57)
                        goto label_4b777c
                    
                    void* ecx_295 = *i_17 + edx_57
                    struct _EXCEPTION_REGISTRATION_RECORD*** edx_58 = arg1[7]
                    void* i_10 = esi_25 - 4
                    
                    if (esi_25 u>= 4)
                        void* i_3
                        
                        do
                            if (*edx_58 != *ecx_295)
                                goto label_4b772b
                            
                            edx_58 = &edx_58[1]
                            ecx_295 += 4
                            i_3 = i_10
                            i_10 -= 4
                        while (i_3 u>= 4)
                    
                    if (i_10 == 0xfffffffc)
                        goto label_4b747c
                    
                label_4b772b:
                    i_11.b = *edx_58
                    
                    if (i_11.b != *ecx_295)
                        goto label_4b777c
                    
                    if (i_10 == 0xfffffffd)
                        goto label_4b747c
                    
                    i_11.b = *(edx_58 + 1)
                    
                    if (i_11.b != *(ecx_295 + 1))
                        goto label_4b777c
                    
                    if (i_10 == 0xfffffffe)
                        goto label_4b747c
                    
                    i_11.b = *(edx_58 + 2)
                    
                    if (i_11.b != *(ecx_295 + 2))
                        goto label_4b777c
                    
                    if (i_10 == 0xffffffff)
                        goto label_4b747c
                    
                    i_11.b = *(edx_58 + 3)
                    
                    if (i_11.b != *(ecx_295 + 3))
                        goto label_4b777c
                    
                    i_11.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return i_11
                
                if (ecx_292 s< edx_57)
                label_4b777c:
                    sub_4b5010(i_18)
                    char** eax_177
                    eax_177.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_177
            
            i_36 = i_19
        
        i_11 = sub_4d5db0(i_36, arg1[5])
        int32_t* i_25 = i_11
        
        if (i_25[3] s< arg1[0xa])
            var_68_5 = "AddGameLogNetwork"
            var_6c_1 = 0xc4c
            ecx = "log.logSizeWritten >= playerLogInfo.insertPoint"
            goto label_4b7ab5
        
        i_11 = sub_4b4be0(arg1[5] << 4, &i_19[0x49e + arg1[5] * 4], i_25, &arg1[5])
        
        if (data_cc8d5c != 0)
            goto label_4b747c
        
        goto label_4b5df6
    case 0x12
        i_11 = sub_4b50b0(arg1[3])
        void* ecx_284 = data_cc8d5c
        
        if (ecx_284 == 0)
            goto label_4b5df6
        
        *(ecx_284 + 0x5044) = 6
        *(ecx_284 + 0x5070) = 2
        *(ecx_284 + 0x5074) = i_11
        i_11.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return i_11
    case 0x13
        int32_t var_68_12 = arg1[2]
        void* var_70_9 = data_1597d28
        i_20 = &arg1[3]
        
        if (sub_695870(i_11, &arg1[3], &arg1[3], var_70_9, nullptr, var_68_12).b == 0)
            goto label_4b747c
        
        int32_t eax_36 = arg1[3]
        struct _EXCEPTION_REGISTRATION_RECORD** i_51 = &arg1[3]
        i_11 = eax_36 - 1
        
        if (eax_36 != 1)
            struct _EXCEPTION_REGISTRATION_RECORD** i_26 = i_11
            i_11 -= 1
            
            if (i_26 == 1)
                struct _EXCEPTION_REGISTRATION_RECORD** i_57 = data_cc8d5c
                i_21 = i_57
                
                if (i_57 == 0)
                    goto label_4b5df6
                
                int32_t i_8 = 0
                
                if (i_51[4] s<= 0)
                    goto label_4b747c
                
                void* i_38 = nullptr
                i_22 = nullptr
                int32_t i_4
                
                do
                    void* ecx_89 = i_38 + i_51[2]
                    var_40 = 0
                    i_63 = &data_801800
                    int32_t* i_27 = *(ecx_89 + 8)
                    char* edi_6 = *(ecx_89 + 0xc)
                    i_19 = i_27
                    int32_t* i_62 = i_27
                    char* i_28 = *(ecx_89 + 4)
                    var_4c = edi_6
                    i_23 = i_28
                    int32_t var_8_1 = 2
                    char* var_68_13 = *(ecx_89 + 0x10)
                    int32_t var_38_1 = 0
                    var_40 = *ecx_89
                    sub_63d8d0(&i_63, var_68_13)
                    char* i_52 = i_23
                    int32_t* i_12 = *(i_20[2] + i_22 + 0x18)
                    i_9 = i_12
                    int32_t* i_16 = i_12
                    int32_t eax_43 = i_57[0x1d71]
                    int32_t** i_39 =
                        (((zx.d(i_19.b) | edi_6 << 8) << 8 | zx.d(i_52.b)) & i_57[0x1d72]) << 2
                    i_17 = i_39
                    int32_t* esi_8 = *(i_39 + eax_43)
                    struct _EXCEPTION_REGISTRATION_RECORD** i_66
                    
                    if (esi_8 == 0)
                    label_4b6511:
                        int64_t** eax_45 = sub_64bfd0(0x1c)
                        eax_45[3] += 1
                        
                        if (*eax_45 == 0)
                            sub_64be70(eax_45)
                        
                        int64_t* esi_9 = *eax_45
                        int64_t xmm0_3 = var_4c.q
                        *eax_45 = *esi_9
                        char* i_29 = i_23
                        i_66 = i_63
                        *esi_9 = xmm0_3
                        esi_9[1].d = i_29
                        *(esi_9 + 0xc) = var_40
                        esi_9[2].d = i_66
                        
                        if (i_66 != 0 && *i_66 != 0)
                            char* eax_48 = sub_63d4e0(&esi_9[2])
                            *(eax_48 + 4) += 1
                        
                        struct _EXCEPTION_REGISTRATION_RECORD** i_40 = i_21
                        void** i_53 = i_17
                        *(esi_9 + 0x14) = i_9
                        esi_9[3].d = *(i_53 + i_40[0x1d71])
                        *(i_53 + i_40[0x1d71]) = esi_9
                        i_57 = i_40
                        i_57[0x1d73] = &i_57[0x1d73]->Next + 1
                    else
                        while (i_52 != esi_8[2] || i_19 != esi_8[1] || edi_6 != *esi_8)
                            esi_8 = esi_8[6]
                            
                            if (esi_8 == 0)
                                goto label_4b6511
                        
                        esi_8[3] = var_40
                        sub_63d850(&esi_8[4], &i_63)
                        i_66 = i_63
                        esi_8[5] = i_9
                        i_57 = i_21
                    
                    int32_t var_8_2 = 3
                    
                    if (data_cf65bc != 0 && i_66 != 0 && *i_66 != 0)
                        char* eax_53 = sub_63d4e0(&i_63)
                        int32_t temp33_1 = *(eax_53 + 4)
                        *(eax_53 + 4) -= 1
                        
                        if (temp33_1 == 1)
                            sub_64c080(eax_53, *(eax_53 + 0xc) + 0x10)
                            i_63 = &data_801800
                    
                    int32_t var_8_3 = 0xffffffff
                    i_51 = i_20
                    i_4 = i_8 + 1
                    i_38 = &i_22[0x20]
                    i_8 = i_4
                    i_22 = i_38
                while (i_4 s< i_51[4])
                
                i_4.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return i_4
            
            var_68_5 = "GameClientHandleMessage"
            var_6c_1 = 0xeae
            goto label_4b7ab0
        
        void* edi_8 = data_cc8d5c
        
        if (edi_8 == 0)
            goto label_4b5df6
        
        bool cond:6_1 = i_51[4] s<= 0
        i_9 = nullptr
        
        if (cond:6_1)
            goto label_4b747c
        
        void* i_41 = nullptr
        i_19 = nullptr
        void* i_5
        
        do
            void* ecx_106 = i_41 + i_51[2]
            int32_t var_50_1 = 0
            var_4c = &data_801800
            int32_t eax_57 = *(ecx_106 + 0xc)
            var_40 = eax_57
            struct _EXCEPTION_REGISTRATION_RECORD** i_30 = *(ecx_106 + 8)
            i_21 = i_30
            i_63 = i_30
            i_23 = *(ecx_106 + 4)
            int32_t var_8_4 = 0
            int32_t eax_59 = *ecx_106
            int32_t var_48
            var_48.q = 0
            sub_63d8d0(&var_4c, *(ecx_106 + 0x10))
            char* i_42 = i_23
            int32_t eax_64 = *(edi_8 + 0x75b8)
            char* i_58 = ((zx.d(i_21.b) | eax_57 << 8) << 8 | zx.d(i_42.b)) & *(edi_8 + 0x75bc)
            i_22 = i_58
            int32_t* esi_14 = *(eax_64 + (i_58 << 2))
            int32_t var_44
            
            if (esi_14 == 0)
            label_4b66e6:
                int64_t** i_43 = sub_64bfd0(0x20)
                i_17 = i_43
                i_43[3] += 1
                
                if (*i_43 == 0)
                    sub_64be70(i_43)
                    i_43 = i_17
                
                int64_t* esi_15 = *i_43
                int64_t xmm0_4 = var_40.q
                *i_43 = *esi_15
                char* i_31 = i_23
                *esi_15 = xmm0_4
                esi_15[1].d = i_31
                *(esi_15 + 0xc) = eax_59
                char* const eax_69 = var_4c
                esi_15[2].d = eax_69
                
                if (eax_69 != 0 && *eax_69 != 0)
                    char* eax_70 = sub_63d4e0(&esi_15[2])
                    *(eax_70 + 4) += 1
                
                char* const i_44 = i_22
                *(esi_15 + 0x14) = var_48
                esi_15[3].d = var_44
                *(esi_15 + 0x1c) = *(*(edi_8 + 0x75b8) + (i_44 << 2))
                *(*(edi_8 + 0x75b8) + (i_44 << 2)) = esi_15
                *(edi_8 + 0x75c0) += 1
            else
                while (i_42 != esi_14[2] || i_21 != esi_14[1] || eax_57 != *esi_14)
                    esi_14 = esi_14[7]
                    
                    if (esi_14 == 0)
                        goto label_4b66e6
                
                esi_14[3] = eax_59
                sub_63d850(&esi_14[4], &var_4c)
                esi_14[5] = var_48
                esi_14[6] = var_44
            int32_t ecx_109 = *(edi_8 + 0x75d0)
            
            if (eax_57 s>= ecx_109)
                char* i_32
                
                if (eax_57 s> ecx_109)
                    i_32 = i_23
                    *(edi_8 + 0x75d0) = var_40.q
                    *(edi_8 + 0x75d8) = i_32
                else
                    int32_t ecx_110 = *(edi_8 + 0x75d4)
                    struct _EXCEPTION_REGISTRATION_RECORD** i_61 = i_21
                    
                    if (i_61 s>= ecx_110)
                        i_32 = i_23
                        
                        if (i_61 s> ecx_110 || i_32 s> *(edi_8 + 0x75d8))
                            *(edi_8 + 0x75d0) = var_40.q
                            *(edi_8 + 0x75d8) = i_32
            
            int32_t var_8_5 = 1
            
            if (data_cf65bc != 0)
                char* const eax_79 = var_4c
                
                if (eax_79 != 0 && *eax_79 != 0)
                    char* eax_80 = sub_63d4e0(&var_4c)
                    int32_t temp32_1 = *(eax_80 + 4)
                    *(eax_80 + 4) -= 1
                    
                    if (temp32_1 == 1)
                        sub_64c080(eax_80, *(eax_80 + 0xc) + 0x10)
                        var_4c = &data_801800
            
            int32_t var_8_6 = 0xffffffff
            i_51 = i_20
            i_5 = i_9 + 1
            i_41 = &i_19[8]
            i_9 = i_5
            i_19 = i_41
        while (i_5 s< i_51[4])
        
        i_5.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return i_5
    case 0x14
        void* eax_91 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        *(eax_91 + 0x72d8) = *(arg1 + 0xc)
        *(eax_91 + 0x72e8) = arg1[7]
        eax_91.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_91
    case 0x15
        if (sub_695870(i_11, &arg1[3], &arg1[3], data_1597d30, nullptr, arg1[2]).b != 0)
            i_11 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            int32_t ecx_135 = arg1[3]
            
            if (ecx_135 != 0)
                var_40 = ecx_135
                i_63 = arg1[4]
                int32_t var_38_3 = 1
                i_17 = 1
                sub_4bb360(&i_11[0x1cbb], &var_40, &i_17)
            
            int32_t i_6 = 0
            
            if (arg1[7] s> 0)
                void* i_55 = &i_11[0x1cbe]
                int32_t ecx_138 = 0
                i_17 = i_55
                int32_t var_30_5 = 0
                
                do
                    int32_t* ecx_139 = ecx_138 + arg1[5]
                    int32_t var_44_1 = 1
                    int32_t var_48_1 = ecx_139[4]
                    var_58 = *ecx_139
                    sub_4bb420(i_55, ecx_139, &var_58)
                    i_6 += 1
                    i_55 = i_17
                    ecx_138 = var_30_5 + 0x14
                    var_30_5 = ecx_138
                while (i_6 s< arg1[7])
                
                int32_t* eax_90
                eax_90.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_90
        
        goto label_4b747c
    case 0x16, 0x17, 0x23
        if (sub_695870(i_11, &arg1[3], &arg1[3], data_1597d70, nullptr, arg1[2]).b == 0)
            goto label_4b747c
        
        int32_t eax_92 = arg1[1]
        i_11 = eax_92 - 0xf4259
        void* edi_11
        
        if (eax_92 == 0xf4259)
            void* edi_12 = data_cc8d5c
            
            if (edi_12 == 0)
                goto label_4b5df6
            
            edi_11 = edi_12 + 0x75dc
        else
            void* eax_93 = i_11 - 1
            
            if (i_11 == 1)
                edi_11 = &sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))[0x1c87]
            else
                i_11 = eax_93 - 0xc
                
                if (eax_93 != 0xc)
                    var_68_5 = "ClientGetLeaderboard"
                    var_6c_1 = 0xdc2
                    goto label_4b7ab0
                
                void* edi_10 = data_cc8d5c
                
                if (edi_10 == 0)
                    goto label_4b5df6
                
                edi_11 = edi_10 + 0x769c
        
        void* edx_19 = &arg1[3]
        *(edi_11 + 0xb4) = 0
        i_9 = nullptr
        
        if (*(edx_19 + 8) s<= 0)
            goto label_4b747c
        
        i_20 = nullptr
        void* i_7
        
        do
            int32_t ecx_152 = *(edi_11 + 0xb4)
            void* esi_17 = edi_11 + ecx_152 * 0xc
            struct _EXCEPTION_REGISTRATION_RECORD** i_45 = i_20
            *(edi_11 + 0xb4) = ecx_152 + 1
            *esi_17 = *(i_45 + *edx_19)
            sub_63d8d0(esi_17 + 4, *(*edx_19 + i_45 + 8))
            edx_19 = &arg1[3]
            struct _EXCEPTION_REGISTRATION_RECORD** i_46 = i_20
            *(esi_17 + 8) = *(*edx_19 + i_46 + 0x10)
            i_7 = i_9 + 1
            i_20 = &i_46[6]
            i_9 = i_7
        while (i_7 s< *(edx_19 + 8))
        
        i_7.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return i_7
    case 0x19
        i_24[0x1da5] = 1
        i_11.b = 1
        i_24[0x1da6] = 0
        data_8db700 = 0x26
        fsbase->NtTib.ExceptionList = ExceptionList
        return i_11
    case 0x1a
        int32_t eax_102 = arg1[3]
        data_171e6bc
        i_24[0x1da5] = 2
        i_24[0x1da6] = eax_102
        data_8db700 = 0x26
        sub_6889d0()
        uint32_t eax_103
        eax_103.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_103
    case 0x1b
        if (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4250) != arg1[3])
            goto label_4b747c
        
        *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x7854) = 1
        int64_t xmm0_2 = *(arg1 + 0x10)
        int32_t esi_7 = arg1[6]
        void* eax_35 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        *(eax_35 + 0x7858) = xmm0_2
        *(eax_35 + 0x7860) = esi_7
        eax_35.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_35
    case 0x1c
        sub_4b5230(&arg1[3])
        void* eax_11
        eax_11.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_11
    case 0x1d
        sub_63d8d0(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)), &arg1[5])
    label_4b60bd:
        i_24 = arg1[3]
        int32_t edi_1 = arg1[4]
        void* eax_13 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        *(eax_13 + 0x4260) = i_24
        *(eax_13 + 0x4264) = edi_1
        goto label_4b60da
    case 0x1e
        *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 8) = arg1[5]
        int32_t esi_1 = arg1[3]
        int32_t edi_2 = arg1[4]
        void* eax_16 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        *(eax_16 + 0x4268) = esi_1
        *(eax_16 + 0x426c) = edi_2
        data_cc8dc8
        sub_4d8ad0(esi_1)
        char* eax_17
        eax_17.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_17
    case 0x1f
        i_11 = sub_695870(i_11, &arg1[3], &arg1[3], data_1597d48, nullptr, arg1[2])
        
        if (i_11.b == 0)
            goto label_4b747c
        
        if (arg1[7] s> 0x2bc)
            var_68_5 = "GameClientHandleMessage"
            var_6c_1 = 0xe44
            ecx = "msg.numBans <= MAX_BAN_CARDS"
            goto label_4b7ab5
        
        memcpy(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x58ec, arg1[5], arg1[7] << 2)
        *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x63dc) = arg1[7]
        int32_t esi_3 = arg1[3]
        int32_t edi_3 = arg1[4]
        void* eax_21 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        *(eax_21 + 0x4278) = esi_3
        *(eax_21 + 0x427c) = edi_3
        data_cc8dc8
        sub_4d8ad0(esi_3)
        char* eax_22
        eax_22.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_22
    case 0x20
        i_11 = sub_695870(i_11, &arg1[3], &arg1[3], data_1597d50, nullptr, arg1[2])
        
        if (i_11.b == 0)
            goto label_4b747c
        
        if (arg1[7] s<= 0x40)
            memcpy(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x56e8, arg1[5], arg1[7] << 3)
            *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x58e8) = arg1[7]
            goto label_4b60bd
        
        var_68_5 = "GameClientHandleMessage"
        var_6c_1 = 0xe53
        ecx = "msg.numSmartplays <= MAX_SMARTPLAYS"
    label_4b7ab5:
        var_70_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
        goto label_4b7abf
    case 0x21
        int64_t xmm0_1 = *(arg1 + 0x14)
        int32_t esi_5 = arg1[7]
        void* eax_26 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        *(eax_26 + 0x71f4) = xmm0_1
        *(eax_26 + 0x71fc) = esi_5
        i_24 = arg1[3]
        int32_t edi_4 = arg1[4]
        void* eax_27 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        *(eax_27 + 0x4288) = i_24
        *(eax_27 + 0x428c) = edi_4
    label_4b60da:
        data_cc8dc8
        sub_4d8ad0(i_24)
        char* eax_14
        eax_14.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_14
    case 0x22
        if (sub_695870(i_11, &arg1[3], &arg1[3], data_1597d60, nullptr, arg1[2]).b == 0)
            goto label_4b747c
        
        i_11 = sub_4b50b0(arg1[3])
        
        if (i_11 == 0)
            goto label_4b747c
        
        void* ecx_75 = data_cc8d5c
        
        if (ecx_75 == 0)
            goto label_4b5df6
        
        void* eax_29 = sub_4b51d0(sub_4bb050(ecx_75 + 0x507c, i_11), arg1[4])
        i_11 = arg1[7]
        
        if (i_11 s>= 0x40)
            var_68_5 = "GameClientHandleMessage"
            var_6c_1 = 0xe70
            ecx = "msg.numSmartplays < MAX_SMARTPLAYS"
            goto label_4b7ab5
        
        memcpy(eax_29 + 0x28, arg1[5], i_11 << 3)
        *(eax_29 + 0x228) = arg1[7]
        int32_t eax_32
        eax_32.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_32
    case 0x24
        sub_4c5b90(&arg1[3])
        char* eax_184
        eax_184.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_184
    case 0x25
        sub_4ba570(&arg1[3])
        void* eax_187
        eax_187.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_187
    case 0x26
        i_11 = data_cc8d68
        
        if (i_11 == 0)
            goto label_4b747c
        
        int32_t edx_70 = arg1[4]
        i_11[6] = arg1[3]
        i_11[7] = edx_70
        goto label_4b60da
    case 0x27
        i_11 = data_cc8d68
        
        if (i_11 == 0)
            goto label_4b747c
        
        int32_t var_50_3 = arg1[3]
        int32_t var_48_2 = arg1[7]
        var_4c = arg1[4]
        int32_t var_44_2 = arg1[8]
        sub_4bb1d0(&i_11[3], &arg1[5], &var_58:8)
        int32_t* eax_188
        eax_188.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_188
    case 0x29
        int32_t var_68_17 = arg1[2]
        void* var_70_10 = data_1597d38
        i_20 = &arg1[3]
        
        if (sub_695870(&arg1[3], &arg1[3], &arg1[3], var_70_10, nullptr, var_68_17).b == 0)
            goto label_4b747c
        
        void* eax_83 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        int32_t ecx_120 = arg1[3]
        i_11 = &arg1[3]
        
        if (ecx_120 != 0)
            var_40 = ecx_120
            i_63 = i_11[1]
            int32_t var_38_2 = 1
            i_17 = 1
            sub_4bb360(eax_83 + 0x72ec, &var_40, &i_17)
            i_11 = i_20
        
        int32_t var_30_3 = 0
        
        if (i_11[4] s<= 0)
            goto label_4b747c
        
        int32_t* i_54 = eax_83 + 0x7304
        int32_t edi_9 = 0
        i_19 = i_54
        
        while (true)
            int32_t* eax_85 = i_11[2] + edi_9
            sub_4bb4c0(i_54, eax_85, eax_85)
            
            if (i_24[0x141c] == 2)
                int32_t* i_13 = sub_4b9300(&i_24[0x141c])
                i_9 = i_13
                int32_t edx_15 = i_13[7]
                
                if (*i_13 == 0)
                    int32_t* i_33 = i_20[2]
                    i_17 = i_33
                    
                    if (edx_15 s>> 4 == *(i_33 + edi_9))
                        i_11 = *(&i_17[(edx_15 & 0xf) * 3] + edi_9 + 0x1c)
                        *i_9 = i_11
                        
                        if (i_11 == 0)
                            var_68_5 = "GameClientHandleMessage"
                            var_6c_1 = 0xedd
                            ecx = "save.id != GAMEID_NONE"
                            break
                
                sub_4b0e60(i_24[0x141d])
            
            edi_9 += 0x94
            i_11 = i_20
            int32_t ecx_131 = var_30_3 + 1
            var_30_3 = ecx_131
            
            if (ecx_131 s>= i_11[4])
                goto label_4b747c
            
            i_54 = i_19
        
        goto label_4b7ab5
