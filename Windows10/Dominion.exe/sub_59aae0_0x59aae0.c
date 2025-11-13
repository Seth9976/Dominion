// 函数: sub_59aae0
// 地址: 0x59aae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_767ed1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_19c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_20 = 0
char* arg_c
char* ebx = arg_c
void* eax_4 = sub_599650(arg2, ebx)
arg_c = (ebx << 5) + 0x7c0170
char* ecx_1 = *eax_4
char* const eax_5 = &data_801800

if (ecx_1 != 0)
    eax_5 = ecx_1

char* var_114
char* const var_54
char* const arg_4
char* arg_8
void* esi
int32_t* edi

if (arg_4 != 3)
    int32_t var_1a0_1 = *arg_8
    edi = sub_598350(&var_114)
    int32_t var_8_3 = 2
    esi = 2
else
    sub_4d47c0(&var_54, "dom_log_each_player")
    edi = &var_54
    int32_t var_8_2 = 1
    esi = 0x21

char* edi_1 = *edi
void* eax_8 = esi
arg_4 = eax_8
char ebx_3 = eax_8.b
void* var_20_1 = esi
void* var_24 = esi
char* var_138 = edi_1

if (edi_1 == 0 || *edi_1 == 0)
    esi = eax_8
    ebx_3 = eax_8.b
else
    char* eax_9 = sub_63d4e0(&var_138)
    *(eax_9 + 4) += 1
    eax_8 = esi

int32_t var_8_4 = 3

if ((eax_8.b & 2) != 0)
    void* esi_1 = esi & 0xfffffffd
    var_24 = esi_1
    void* var_20_2 = esi_1
    var_8_4.b = 5
    ebx_3 = esi_1.b
    
    if (data_cf65bc != 0)
        char* eax_10 = var_114
        
        if (eax_10 == 0 || *eax_10 == 0)
            ebx_3 = esi_1.b
        else
            char* eax_11 = sub_63d4e0(&var_114)
            int32_t temp0_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                var_114 = &data_801800
                ebx_3 = esi_1.b

void* ebx_4 = var_24

if ((ebx_3 & 1) != 0)
    ebx_4 &= 0xfffffffe
    void* var_20_3 = ebx_4
    var_8_4.b = 7
    
    if (data_cf65bc != 0)
        char* eax_12 = var_54
        
        if (eax_12 != 0 && *eax_12 != 0)
            char* eax_13 = sub_63d4e0(&var_54)
            int32_t temp1_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                var_54 = &data_801800

char* i_2 = *(arg_8 + 0x18)
char* const i_1 = i_2
void* ebx_5 = ebx_4 | 8
var_8_4.b = 8
var_24 = ebx_5
char* const esi_2 = &data_801800
arg_4 = &data_801800
void* var_20_4 = ebx_5

if (i_2 s> 0)
    char* const i
    
    do
        if (esi_2 == 0 || *esi_2 == 0)
            int32_t** eax_16 = sub_64bfd0(0x15)
            eax_16[3] += 1
            
            if (*eax_16 == 0)
                sub_64be70(eax_16)
            
            int32_t* esi_3 = *eax_16
            char* ecx_13 = "    "
            *eax_16 = *esi_3
            *esi_3 = 0xfafafafa
            esi_3[1] = 1
            esi_3[2] = 4
            esi_3[3] = 5
            esi_2 = &esi_3[4]
            arg_4 = esi_2
            int32_t* eax_17
            
            do
                eax_17.b = *ecx_13
                ecx_13 = &ecx_13[1]
                ecx_13[esi_2 + 0xff7db7ef] = eax_17.b
            while (eax_17.b != 0)
        else
            char* eax_15 = sub_63d4e0(&arg_4)
            int32_t ebx_6 = *(eax_15 + 8)
            sub_63d5e0(eax_15, ebx_6 + 4, &arg_4, 1)
            esi_2 = arg_4
            __builtin_strncpy(&esi_2[ebx_6], "    ", 5)
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    ebx_5 = var_24

char* eax_18 = &data_801800

if (edi_1 != 0)
    eax_18 = edi_1

char* var_40
char** eax_19 = sub_63dfa0(eax_18, eax_5, &var_40, 0x824d9c, eax_18)
var_8_4.b = 0xa
*arg3 = esi_2

if (esi_2 != 0 && *esi_2 != 0)
    char* eax_21 = sub_63d4e0(arg3)
    *(eax_21 + 4) += 1

char* eax_22 = *eax_19
int32_t ebx_8 = ebx_5 | 0x10
int32_t var_20_5 = ebx_8
char* ecx_16 = &data_801800

if (eax_22 != 0)
    ecx_16 = eax_22

sub_63d960(arg3, ecx_16)
int32_t var_8_5 = 9
int32_t ebx_10 = (ebx_8 & 0xffffffef) | 4
int32_t var_20_6 = ebx_10
var_8_5.b = 0xb

if (data_cf65bc != 0)
    char* eax_23 = var_40
    
    if (eax_23 != 0 && *eax_23 != 0)
        char* eax_24 = sub_63d4e0(&var_40)
        int32_t temp3_1 = *(eax_24 + 4)
        *(eax_24 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
            var_40 = &data_801800

void* ebx_11 = ebx_10 & 0xfffffff7
var_24 = ebx_11
void* var_20_7 = ebx_11
var_8_5.b = 0xc

if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
    char* eax_25 = sub_63d4e0(&arg_4)
    int32_t temp4_1 = *(eax_25 + 4)
    *(eax_25 + 4) -= 1
    
    if (temp4_1 == 1)
        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
        arg_4 = &data_801800

int32_t edx_15 = arg6
char* const edi_3 = nullptr
var_8_5.b = 6
char* esi_4 = arg_8
arg_4 = nullptr
int32_t var_3c = *(esi_4 + 0x1c)
int32_t var_38 = *(esi_4 + 0x20)
int32_t var_34 = *(esi_4 + 0x24)
int32_t eax_29 = 0
int32_t var_50_1 = 0
char* ecx_23
int32_t* result

while (true)
    void* eax_30 = *(arg_c + (eax_29 << 2) + 8)
    int32_t var_1a4_15
    void* var_28
    void* var_14
    char const* const ecx_317
    
    switch (eax_30)
        case nullptr
            int32_t edx_136 = *esi_4
            
            if (edx_136 == 0xffffffff)
                edx_15 = arg6
                goto label_59b646
            
            void* eax_205 = sub_4b9680(arg4 + 8, edx_136)
            char* var_6c
            sub_4b06c0(eax_205, arg4 + 8, &var_6c, eax_205, &var_14)
            ebx_11 |= 0x4000
            var_24 = ebx_11
            void* var_20_19 = ebx_11
            var_8_5.b = 0x5f
            char* ecx_219 = &data_801800
            char* eax_206 = var_6c
            char* edx_138 = &data_801800
            result = arg3
            
            if (eax_206 != 0)
                ecx_219 = eax_206
            
            char* eax_207 = *result
            
            if (eax_207 != 0)
                edx_138 = eax_207
            
            var_8_5.b = 0x60
            char* var_d8
            sub_63d850(result, sub_63dfa0(eax_207, edx_138, &var_d8, "[player]", ecx_219))
            var_8_5.b = 0x61
            
            if (data_cf65bc != 0)
                char* eax_209 = var_d8
                
                if (eax_209 != 0 && *eax_209 != 0)
                    char* eax_210 = sub_63d4e0(&var_d8)
                    int32_t temp34_1 = *(eax_210 + 4)
                    *(eax_210 + 4) -= 1
                    
                    if (temp34_1 == 1)
                        sub_64c080(eax_210, *(eax_210 + 0xc) + 0x10)
                        var_d8 = &data_801800
            
            var_8_5.b = 0x62
            
            if (data_cf65bc != 0)
                char* eax_211 = var_6c
                
                if (eax_211 != 0 && *eax_211 != 0)
                    char* eax_212 = sub_63d4e0(&var_6c)
                    int32_t temp52_1 = *(eax_212 + 4)
                    *(eax_212 + 4) -= 1
                    
                    if (temp52_1 == 1)
                        sub_64c080(eax_212, *(eax_212 + 0xc) + 0x10)
                        var_6c = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 1
            int32_t edx_143 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            arg_4 = edi_3
            void* eax_213 = sub_4b9680(arg4 + 8, edx_143)
            sub_4b06c0(eax_213, arg4 + 8, &var_40, eax_213, &var_14)
            ebx_11 |= 0x2000
            var_24 = ebx_11
            void* var_20_20 = ebx_11
            var_8_5.b = 0x63
            char* const ecx_228 = &data_801800
            char* eax_214 = var_40
            char* const edx_145 = &data_801800
            result = arg3
            
            if (eax_214 != 0)
                ecx_228 = eax_214
            
            char* eax_215 = *result
            
            if (eax_215 != 0)
                edx_145 = eax_215
            
            var_8_5.b = 0x64
            char* var_dc
            sub_63d850(result, sub_63dfa0(eax_215, edx_145, &var_dc, "[opponent]", ecx_228))
            var_8_5.b = 0x65
            
            if (data_cf65bc != 0)
                char* eax_217 = var_dc
                
                if (eax_217 != 0 && *eax_217 != 0)
                    char* eax_218 = sub_63d4e0(&var_dc)
                    int32_t temp15_1 = *(eax_218 + 4)
                    *(eax_218 + 4) -= 1
                    
                    if (temp15_1 == 1)
                        sub_64c080(eax_218, *(eax_218 + 0xc) + 0x10)
                        var_dc = &data_801800
            
            var_8_5.b = 0x66
            
            if (data_cf65bc != 0)
                char* eax_219 = var_40
                
                if (eax_219 != 0 && *eax_219 != 0)
                    char* eax_220 = sub_63d4e0(&var_40)
                    int32_t temp35_1 = *(eax_220 + 4)
                    *(eax_220 + 4) -= 1
                    
                    if (temp35_1 == 1)
                        sub_64c080(eax_220, *(eax_220 + 0xc) + 0x10)
                        var_40 = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 2
            int32_t eax_124 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_1a0_23 = eax_124
            arg_4 = edi_3
            char* const var_68
            sub_63df30(&var_68, "%d")
            ebx_11 |= 0x1000
            var_24 = ebx_11
            void* var_20_18 = ebx_11
            var_8_5.b = 0x3b
            char* const ecx_135 = &data_801800
            char* const eax_125 = var_68
            char* edx_83 = &data_801800
            result = arg3
            
            if (eax_125 != 0)
                ecx_135 = eax_125
            
            char* eax_126 = *result
            
            if (eax_126 != 0)
                edx_83 = eax_126
            
            var_8_5.b = 0x3c
            char* var_94
            sub_63d850(result, sub_63dfa0(eax_126, edx_83, &var_94, 0x801c54, ecx_135))
            var_8_5.b = 0x3d
            
            if (data_cf65bc != 0)
                char* eax_128 = var_94
                
                if (eax_128 != 0 && *eax_128 != 0)
                    char* eax_129 = sub_63d4e0(&var_94)
                    int32_t temp10_1 = *(eax_129 + 4)
                    *(eax_129 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        sub_64c080(eax_129, *(eax_129 + 0xc) + 0x10)
                        var_94 = &data_801800
            
            var_8_5.b = 0x3e
            
            if (data_cf65bc != 0)
                char* eax_130 = var_68
                
                if (eax_130 != 0 && *eax_130 != 0)
                    char* eax_131 = sub_63d4e0(&var_68)
                    int32_t temp26_1 = *(eax_131 + 4)
                    *(eax_131 + 4) -= 1
                    
                    if (temp26_1 == 1)
                        sub_64c080(eax_131, *(eax_131 + 0xc) + 0x10)
                        var_68 = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 3
            int32_t eax_45 = sub_59a910(eax_4, 2)
            
            if (arg5 == 0)
                int32_t var_1a0_8 = *(esi_4 + 0x14)
                var_8_5.b = 0x15
                char* ecx_51 = &data_801800
                char* var_78
                char* eax_55 = *sub_59a7a0(eax_45, arg2, &var_78, *(esi_4 + 0x10))
                char* edx_34 = &data_801800
                result = arg3
                
                if (eax_55 != 0)
                    ecx_51 = eax_55
                
                char* eax_56 = *result
                
                if (eax_56 != 0)
                    edx_34 = eax_56
                
                var_8_5.b = 0x16
                char* var_74
                sub_63d850(result, sub_63dfa0(eax_56, edx_34, &var_74, "[cards]", ecx_51))
                var_8_5.b = 0x17
                
                if (data_cf65bc != 0)
                    char* eax_58 = var_74
                    
                    if (eax_58 != 0 && *eax_58 != 0)
                        char* eax_59 = sub_63d4e0(&var_74)
                        int32_t temp22_1 = *(eax_59 + 4)
                        *(eax_59 + 4) -= 1
                        
                        if (temp22_1 == 1)
                            sub_64c080(eax_59, *(eax_59 + 0xc) + 0x10)
                            var_74 = &data_801800
                
                var_8_5.b = 0x18
                
                if (data_cf65bc != 0)
                    char* eax_60 = var_78
                    
                    if (eax_60 != 0 && *eax_60 != 0)
                        char* eax_61 = sub_63d4e0(&var_78)
                        int32_t temp46_1 = *(eax_61 + 4)
                        *(eax_61 + 4) -= 1
                        
                        if (temp46_1 == 1)
                            sub_64c080(eax_61, *(eax_61 + 0xc) + 0x10)
                            var_78 = &data_801800
                
                ecx_23 = arg2
                edx_15 = arg6
                var_8_5.b = 6
            else
                int32_t var_1ac_1 = 0
                var_8_5.b = 0x11
                char* ecx_43 = &data_801800
                char* var_70
                char* eax_47 =
                    *sub_5991e0(eax_45, arg2, &var_70, eax_45, *(esi_4 + 0x10), (*(esi_4 + 0x14)).b)
                char* edx_29 = &data_801800
                result = arg3
                
                if (eax_47 != 0)
                    ecx_43 = eax_47
                
                char* eax_48 = *result
                
                if (eax_48 != 0)
                    edx_29 = eax_48
                
                var_8_5.b = 0x12
                char* var_130
                sub_63d850(result, sub_63dfa0(eax_48, edx_29, &var_130, "[cards]", ecx_43))
                var_8_5.b = 0x13
                
                if (data_cf65bc != 0)
                    char* eax_50 = var_130
                    
                    if (eax_50 != 0 && *eax_50 != 0)
                        char* eax_51 = sub_63d4e0(&var_130)
                        int32_t temp23_1 = *(eax_51 + 4)
                        *(eax_51 + 4) -= 1
                        
                        if (temp23_1 == 1)
                            sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
                            var_130 = &data_801800
                
                var_8_5.b = 0x14
                
                if (data_cf65bc != 0)
                    char* eax_52 = var_70
                    
                    if (eax_52 != 0 && *eax_52 != 0)
                        char* eax_53 = sub_63d4e0(&var_70)
                        int32_t temp47_1 = *(eax_53 + 4)
                        *(eax_53 + 4) -= 1
                        
                        if (temp47_1 == 1)
                            sub_64c080(eax_53, *(eax_53 + 0xc) + 0x10)
                            var_70 = &data_801800
                
                ecx_23 = arg2
                edx_15 = arg6
                var_8_5.b = 6
            
            goto label_59b64f
        case 6
            int32_t eax_142 = sub_59a910(eax_4, 1)
            void* ecx_153 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_1a0_29 = 0
            var_14 = ecx_153
            arg_4 = edi_3
            var_8_5.b = 0x43
            char* ecx_157 = &data_801800
            char* eax_144 = *sub_59d790(esi_4, eax_142, &var_14, 1, arg6 u>> 4 & 1, 0, ecx_153.b)
            char* edx_95 = &data_801800
            result = arg3
            
            if (eax_144 != 0)
                ecx_157 = eax_144
            
            char* eax_145 = *result
            
            if (eax_145 != 0)
                edx_95 = eax_145
            
            var_8_5.b = 0x44
            char* var_a0
            sub_63d850(result, sub_63dfa0(eax_145, edx_95, &var_a0, "[card]", ecx_157))
            var_8_5.b = 0x45
            
            if (data_cf65bc != 0)
                char* eax_147 = var_a0
                
                if (eax_147 != 0 && *eax_147 != 0)
                    char* eax_148 = sub_63d4e0(&var_a0)
                    int32_t temp11_1 = *(eax_148 + 4)
                    *(eax_148 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_64c080(eax_148, *(eax_148 + 0xc) + 0x10)
                        var_a0 = &data_801800
            
            var_8_5.b = 0x46
            
            if (data_cf65bc != 0)
                char* const var_a4
                char* eax_149 = var_a4
                
                if (eax_149 != 0 && *eax_149 != 0)
                    char* eax_150 = sub_63d4e0(&var_a4)
                    int32_t temp27_1 = *(eax_150 + 4)
                    *(eax_150 + 4) -= 1
                    
                    if (temp27_1 == 1)
                        sub_64c080(eax_150, *(eax_150 + 0xc) + 0x10)
                        var_a4 = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 7
            int32_t ecx_143 = *(esi_4 + 0x14) - 1
            int32_t ecx_144 = ecx_143 + *(esi_4 + 0x10)
            
            if (ecx_143 + *(esi_4 + 0x10) s< 0 || ecx_144 s>= data_1597e48)
            label_59d1de:
                sub_63b870(eax_30, &data_801800, "index >= 0 && index < mSize", 
                    "C:\x\ax2017\Engine\xDynArray.h", 0xd4, 
                    "XDynArray<struct DomLogCardEntry>::operator []")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t var_1a0_26 = 0
            var_14 = *(data_1597e44 + (ecx_144 << 3))
            var_8_5.b = 0x3f
            char* ecx_145 = &data_801800
            char* eax_135 = *sub_59d790(esi_4, 1, &var_14, 1, nullptr, 0, ecx_144.b)
            char* edx_89 = &data_801800
            result = arg3
            
            if (eax_135 != 0)
                ecx_145 = eax_135
            
            char* eax_136 = *result
            
            if (eax_136 != 0)
                edx_89 = eax_136
            
            var_8_5.b = 0x40
            char* var_98
            sub_63d850(result, sub_63dfa0(eax_136, edx_89, &var_98, "[card]", ecx_145))
            var_8_5.b = 0x41
            
            if (data_cf65bc != 0)
                char* eax_138 = var_98
                
                if (eax_138 != 0 && *eax_138 != 0)
                    char* eax_139 = sub_63d4e0(&var_98)
                    int32_t temp48_1 = *(eax_139 + 4)
                    *(eax_139 + 4) -= 1
                    
                    if (temp48_1 == 1)
                        sub_64c080(eax_139, *(eax_139 + 0xc) + 0x10)
                        var_98 = &data_801800
            
            var_8_5.b = 0x42
            
            if (data_cf65bc != 0)
                char* const var_9c
                char* eax_140 = var_9c
                
                if (eax_140 != 0 && *eax_140 != 0)
                    char* eax_141 = sub_63d4e0(&var_9c)
                    int32_t temp58_1 = *(eax_141 + 4)
                    *(eax_141 + 4) -= 1
                    
                    if (temp58_1 == 1)
                        sub_64c080(eax_141, *(eax_141 + 0xc) + 0x10)
                        var_9c = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 8
            int32_t var_1a0_53 = 2
            int32_t var_1a8_5 = (&var_38)[edi_3]
            
            if ((edx_15.b & 1) != 0)
                int32_t var_188_1 = (&var_3c)[edi_3]
                int32_t var_18c = 0
                var_8_5.b = 0x67
                char* ecx_236 = &data_801800
                char* const var_e4
                char* eax_224 = *sub_599fa0(&var_18c, arg2, &var_e4, &var_18c, var_1a8_5, edx_15)
                char* const edx_151 = &data_801800
                result = arg3
                
                if (eax_224 != 0)
                    ecx_236 = eax_224
                
                char* eax_225 = *result
                
                if (eax_225 != 0)
                    edx_151 = eax_225
                
                var_8_5.b = 0x68
                char* var_e0
                sub_63d850(result, sub_63dfa0(eax_225, edx_151, &var_e0, "[resources]", ecx_236))
                var_8_5.b = 0x69
                
                if (data_cf65bc != 0)
                    char* eax_227 = var_e0
                    
                    if (eax_227 != 0 && *eax_227 != 0)
                        char* eax_228 = sub_63d4e0(&var_e0)
                        int32_t temp36_1 = *(eax_228 + 4)
                        *(eax_228 + 4) -= 1
                        
                        if (temp36_1 == 1)
                            sub_64c080(eax_228, *(eax_228 + 0xc) + 0x10)
                            var_e0 = &data_801800
                
                var_8_5.b = 0x6a
                
                if (data_cf65bc != 0)
                    char* eax_229 = var_e4
                    
                    if (eax_229 != 0 && *eax_229 != 0)
                        char* eax_230 = sub_63d4e0(&var_e4)
                        int32_t temp55_1 = *(eax_230 + 4)
                        *(eax_230 + 4) -= 1
                        
                        if (temp55_1 == 1)
                            sub_64c080(eax_230, *(eax_230 + 0xc) + 0x10)
                            var_e4 = &data_801800
            else if ((edx_15.b & 2) == 0)
                int32_t var_148_1 = (&var_3c)[edi_3]
                int32_t var_14c = 1
                var_8_5.b = 0x6f
                char* ecx_252 = &data_801800
                char* var_f4
                char* eax_243 = *sub_599fa0(&var_14c, arg2, &var_f4, &var_14c, var_1a8_5, edx_15)
                char* edx_162 = &data_801800
                result = arg3
                
                if (eax_243 != 0)
                    ecx_252 = eax_243
                
                char* eax_244 = *result
                
                if (eax_244 != 0)
                    edx_162 = eax_244
                
                var_8_5.b = 0x70
                char* var_f0
                sub_63d850(result, sub_63dfa0(eax_244, edx_162, &var_f0, "[resources]", ecx_252))
                var_8_5.b = 0x71
                
                if (data_cf65bc != 0)
                    char* eax_246 = var_f0
                    
                    if (eax_246 != 0 && *eax_246 != 0)
                        char* eax_247 = sub_63d4e0(&var_f0)
                        int32_t temp53_1 = *(eax_247 + 4)
                        *(eax_247 + 4) -= 1
                        
                        if (temp53_1 == 1)
                            sub_64c080(eax_247, *(eax_247 + 0xc) + 0x10)
                            var_f0 = &data_801800
                
                var_8_5.b = 0x72
                
                if (data_cf65bc != 0)
                    char* eax_248 = var_f4
                    
                    if (eax_248 != 0 && *eax_248 != 0)
                        char* eax_249 = sub_63d4e0(&var_f4)
                        int32_t temp59_1 = *(eax_249 + 4)
                        *(eax_249 + 4) -= 1
                        
                        if (temp59_1 == 1)
                            sub_64c080(eax_249, *(eax_249 + 0xc) + 0x10)
                            var_f4 = &data_801800
            else
                int32_t var_144 = 2
                int32_t var_140_1 = 0
                var_8_5.b = 0x6b
                char* ecx_244 = &data_801800
                char* var_ec
                char* eax_233 = *sub_599fa0(&var_144, arg2, &var_ec, &var_144, var_1a8_5, edx_15)
                char* edx_157 = &data_801800
                result = arg3
                
                if (eax_233 != 0)
                    ecx_244 = eax_233
                
                char* eax_234 = *result
                
                if (eax_234 != 0)
                    edx_157 = eax_234
                
                var_8_5.b = 0x6c
                char* var_e8
                sub_63d850(result, sub_63dfa0(eax_234, edx_157, &var_e8, "[resources]", ecx_244))
                var_8_5.b = 0x6d
                
                if (data_cf65bc != 0)
                    char* eax_236 = var_e8
                    
                    if (eax_236 != 0 && *eax_236 != 0)
                        char* eax_237 = sub_63d4e0(&var_e8)
                        int32_t temp54_1 = *(eax_237 + 4)
                        *(eax_237 + 4) -= 1
                        
                        if (temp54_1 == 1)
                            sub_64c080(eax_237, *(eax_237 + 0xc) + 0x10)
                            var_e8 = &data_801800
                
                var_8_5.b = 0x6e
                
                if (data_cf65bc != 0)
                    char* eax_238 = var_ec
                    
                    if (eax_238 != 0 && *eax_238 != 0)
                        char* eax_239 = sub_63d4e0(&var_ec)
                        int32_t temp60_1 = *(eax_239 + 4)
                        *(eax_239 + 4) -= 1
                        
                        if (temp60_1 == 1)
                            sub_64c080(eax_239, *(eax_239 + 0xc) + 0x10)
                            var_ec = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            edi_3 = &edi_3[2]
            var_8_5.b = 6
            arg_4 = edi_3
            goto label_59b64f
        case 9
            if (edi_3 s<= 0)
                char const* const var_1a0_74 = "LogDoReplacements"
                var_1a4_15 = 0x79f
                ecx_317 = "argIdx > 0"
                goto label_59d14e
            
            int32_t eax_250 = (&var_3c)[edi_3]
            int32_t ecx_259 = (&var_40)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_1a0_57 = 2
            int32_t var_150_1 = eax_250
            arg_4 = edi_3
            int32_t var_154 = 0
            var_8_5.b = 0x73
            char* const ecx_261 = &data_801800
            char* var_fc
            char* eax_253 = *sub_599fa0(&var_154, arg2, &var_fc, &var_154, ecx_259, edx_15)
            char* edx_168 = &data_801800
            result = arg3
            
            if (eax_253 != 0)
                ecx_261 = eax_253
            
            char* eax_254 = *result
            
            if (eax_254 != 0)
                edx_168 = eax_254
            
            var_8_5.b = 0x74
            char* var_f8
            sub_63d850(result, sub_63dfa0(eax_254, edx_168, &var_f8, "[opponent]", ecx_261))
            var_8_5.b = 0x75
            
            if (data_cf65bc != 0)
                char* eax_256 = var_f8
                
                if (eax_256 != 0 && *eax_256 != 0)
                    char* eax_257 = sub_63d4e0(&var_f8)
                    int32_t temp37_1 = *(eax_257 + 4)
                    *(eax_257 + 4) -= 1
                    
                    if (temp37_1 == 1)
                        sub_64c080(eax_257, *(eax_257 + 0xc) + 0x10)
                        var_f8 = &data_801800
            
            var_8_5.b = 0x76
            
            if (data_cf65bc != 0)
                char* eax_258 = var_fc
                
                if (eax_258 != 0 && *eax_258 != 0)
                    char* eax_259 = sub_63d4e0(&var_fc)
                    int32_t temp56_1 = *(eax_259 + 4)
                    *(eax_259 + 4) -= 1
                    
                    if (temp56_1 == 1)
                        sub_64c080(eax_259, *(eax_259 + 0xc) + 0x10)
                        var_fc = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0xa
            int32_t eax_260 = (&var_3c)[edi_3]
            int32_t ecx_268 = (&var_38)[edi_3]
            edi_3 = &edi_3[2]
            int32_t var_1a0_59 = 2
            int32_t var_158_1 = eax_260
            arg_4 = edi_3
            int32_t var_15c = 1
            var_8_5.b = 0x77
            char* ecx_270 = &data_801800
            char* var_104
            char* eax_263 = *sub_599fa0(&var_15c, arg2, &var_104, &var_15c, ecx_268, 0)
            char* const edx_174 = &data_801800
            result = arg3
            
            if (eax_263 != 0)
                ecx_270 = eax_263
            
            char* eax_264 = *result
            
            if (eax_264 != 0)
                edx_174 = eax_264
            
            var_8_5.b = 0x78
            char* var_100
            sub_63d850(result, sub_63dfa0(eax_264, edx_174, &var_100, "[tokens]", ecx_270))
            var_8_5.b = 0x79
            
            if (data_cf65bc != 0)
                char* eax_266 = var_100
                
                if (eax_266 != 0 && *eax_266 != 0)
                    char* eax_267 = sub_63d4e0(&var_100)
                    int32_t temp16_1 = *(eax_267 + 4)
                    *(eax_267 + 4) -= 1
                    
                    if (temp16_1 == 1)
                        sub_64c080(eax_267, *(eax_267 + 0xc) + 0x10)
                        var_100 = &data_801800
            
            var_8_5.b = 0x7a
            
            if (data_cf65bc != 0)
                char* eax_268 = var_104
                
                if (eax_268 != 0 && *eax_268 != 0)
                    char* eax_269 = sub_63d4e0(&var_104)
                    int32_t temp38_1 = *(eax_269 + 4)
                    *(eax_269 + 4) -= 1
                    
                    if (temp38_1 == 1)
                        sub_64c080(eax_269, *(eax_269 + 0xc) + 0x10)
                        var_104 = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0xb
            int32_t eax_270 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_1a0_61 = 4
            int32_t var_160_1 = eax_270
            arg_4 = edi_3
            int32_t var_164 = 1
            var_8_5.b = 0x7b
            char* ecx_278 = &data_801800
            char* const var_10c
            char* eax_273 = *sub_599fa0(&var_164, arg2, &var_10c, &var_164, 1, 0)
            char* edx_180 = &data_801800
            result = arg3
            
            if (eax_273 != 0)
                ecx_278 = eax_273
            
            char* eax_274 = *result
            
            if (eax_274 != 0)
                edx_180 = eax_274
            
            var_8_5.b = 0x7c
            char* var_108
            sub_63d850(result, sub_63dfa0(eax_274, edx_180, &var_108, "[token]", ecx_278))
            var_8_5.b = 0x7d
            
            if (data_cf65bc != 0)
                char* eax_276 = var_108
                
                if (eax_276 != 0 && *eax_276 != 0)
                    char* eax_277 = sub_63d4e0(&var_108)
                    int32_t temp17_1 = *(eax_277 + 4)
                    *(eax_277 + 4) -= 1
                    
                    if (temp17_1 == 1)
                        sub_64c080(eax_277, *(eax_277 + 0xc) + 0x10)
                        var_108 = &data_801800
            
            var_8_5.b = 0x7e
            
            if (data_cf65bc != 0)
                char* eax_278 = var_10c
                
                if (eax_278 != 0 && *eax_278 != 0)
                    char* eax_279 = sub_63d4e0(&var_10c)
                    int32_t temp39_1 = *(eax_279 + 4)
                    *(eax_279 + 4) -= 1
                    
                    if (temp39_1 == 1)
                        sub_64c080(eax_279, *(eax_279 + 0xc) + 0x10)
                        var_10c = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0xc
            int32_t eax_280 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_168_1 = eax_280
            arg_4 = edi_3
            int32_t var_16c = 0
            var_8_5.b = 0x7f
            char* ecx_286 = &data_801800
            char* const var_134
            char* eax_283 = *sub_599920(&var_16c, arg2, &var_134, &var_16c)
            char* edx_186 = &data_801800
            result = arg3
            
            if (eax_283 != 0)
                ecx_286 = eax_283
            
            char* eax_284 = *result
            
            if (eax_284 != 0)
                edx_186 = eax_284
            
            var_8_5.b = 0x80
            char* var_110
            sub_63d850(result, sub_63dfa0(eax_284, edx_186, &var_110, "[where]", ecx_286))
            var_8_5.b = 0x81
            
            if (data_cf65bc != 0)
                char* eax_286 = var_110
                
                if (eax_286 != 0 && *eax_286 != 0)
                    char* eax_287 = sub_63d4e0(&var_110)
                    int32_t temp18_1 = *(eax_287 + 4)
                    *(eax_287 + 4) -= 1
                    
                    if (temp18_1 == 1)
                        sub_64c080(eax_287, *(eax_287 + 0xc) + 0x10)
                        var_110 = &data_801800
            
            var_8_5.b = 0x82
            
            if (data_cf65bc != 0)
                char* eax_288 = var_134
                
                if (eax_288 != 0 && *eax_288 != 0)
                    char* eax_289 = sub_63d4e0(&var_134)
                    int32_t temp40_1 = *(eax_289 + 4)
                    *(eax_289 + 4) -= 1
                    
                    if (temp40_1 == 1)
                        sub_64c080(eax_289, *(eax_289 + 0xc) + 0x10)
                        var_134 = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0xd
            int32_t eax_300 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_178_1 = eax_300
            arg_4 = edi_3
            int32_t var_17c = 0
            var_8_5.b = 0x87
            char* ecx_302 = &data_801800
            char* const var_124
            char* eax_303 = *sub_599920(&var_17c, arg2, &var_124, &var_17c)
            char* edx_198 = &data_801800
            result = arg3
            
            if (eax_303 != 0)
                ecx_302 = eax_303
            
            char* eax_304 = *result
            
            if (eax_304 != 0)
                edx_198 = eax_304
            
            var_8_5.b = 0x88
            char* var_120
            sub_63d850(result, sub_63dfa0(eax_304, edx_198, &var_120, "[where_to]", ecx_302))
            var_8_5.b = 0x89
            
            if (data_cf65bc != 0)
                char* eax_306 = var_120
                
                if (eax_306 != 0 && *eax_306 != 0)
                    char* eax_307 = sub_63d4e0(&var_120)
                    int32_t temp20_1 = *(eax_307 + 4)
                    *(eax_307 + 4) -= 1
                    
                    if (temp20_1 == 1)
                        sub_64c080(eax_307, *(eax_307 + 0xc) + 0x10)
                        var_120 = &data_801800
            
            var_8_5.b = 0x8a
            
            if (data_cf65bc != 0)
                char* eax_308 = var_124
                
                if (eax_308 != 0 && *eax_308 != 0)
                    char* eax_309 = sub_63d4e0(&var_124)
                    int32_t temp42_1 = *(eax_309 + 4)
                    *(eax_309 + 4) -= 1
                    
                    if (temp42_1 == 1)
                        sub_64c080(eax_309, *(eax_309 + 0xc) + 0x10)
                        var_124 = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0xe
            int32_t var_170_1 = (&i_1)[edi_3]
            int32_t var_174 = 2
            var_8_5.b = 0x83
            char* ecx_294 = &data_801800
            char* const var_11c
            char* eax_293 = *sub_599920(&var_174, arg2, &var_11c, &var_174)
            char* edx_192 = &data_801800
            result = arg3
            
            if (eax_293 != 0)
                ecx_294 = eax_293
            
            char* eax_294 = *result
            
            if (eax_294 != 0)
                edx_192 = eax_294
            
            var_8_5.b = 0x84
            char* var_118
            sub_63d850(result, sub_63dfa0(eax_294, edx_192, &var_118, "[where]", ecx_294))
            var_8_5.b = 0x85
            
            if (data_cf65bc != 0)
                char* eax_296 = var_118
                
                if (eax_296 != 0 && *eax_296 != 0)
                    char* eax_297 = sub_63d4e0(&var_118)
                    int32_t temp19_1 = *(eax_297 + 4)
                    *(eax_297 + 4) -= 1
                    
                    if (temp19_1 == 1)
                        sub_64c080(eax_297, *(eax_297 + 0xc) + 0x10)
                        var_118 = &data_801800
            
            var_8_5.b = 0x86
            
            if (data_cf65bc != 0)
                char* eax_298 = var_11c
                
                if (eax_298 != 0 && *eax_298 != 0)
                    char* eax_299 = sub_63d4e0(&var_11c)
                    int32_t temp41_1 = *(eax_299 + 4)
                    *(eax_299 + 4) -= 1
                    
                    if (temp41_1 == 1)
                        sub_64c080(eax_299, *(eax_299 + 0xc) + 0x10)
                        var_11c = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0xf
            int32_t eax_178 = sub_59a910(eax_4, 2)
            void* ecx_192 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_1a0_41 = 0
            var_14 = ecx_192
            arg_4 = edi_3
            char var_1a4_8 = arg2.b
            
            if (arg2 != 3)
                var_8_5.b = 0x57
                char* ecx_201 = &data_801800
                char* eax_188 = *sub_59d790(esi_4, eax_178, &var_14, 1, 3, 0, var_1a4_8)
                char* edx_125 = &data_801800
                result = arg3
                
                if (eax_188 != 0)
                    ecx_201 = eax_188
                
                char* eax_189 = *result
                
                if (eax_189 != 0)
                    edx_125 = eax_189
                
                var_8_5.b = 0x58
                char* var_c8
                sub_63d850(result, sub_63dfa0(eax_189, edx_125, &var_c8, "[pile]", ecx_201))
                var_8_5.b = 0x59
                
                if (data_cf65bc != 0)
                    char* eax_191 = var_c8
                    
                    if (eax_191 != 0 && *eax_191 != 0)
                        char* eax_192 = sub_63d4e0(&var_c8)
                        int32_t temp31_1 = *(eax_192 + 4)
                        *(eax_192 + 4) -= 1
                        
                        if (temp31_1 == 1)
                            sub_64c080(eax_192, *(eax_192 + 0xc) + 0x10)
                            var_c8 = &data_801800
                
                var_8_5.b = 0x5a
                
                if (data_cf65bc != 0)
                    char* const var_cc
                    char* eax_193 = var_cc
                    
                    if (eax_193 != 0 && *eax_193 != 0)
                        char* eax_194 = sub_63d4e0(&var_cc)
                        int32_t temp49_1 = *(eax_194 + 4)
                        *(eax_194 + 4) -= 1
                        
                        if (temp49_1 == 1)
                            sub_64c080(eax_194, *(eax_194 + 0xc) + 0x10)
                            var_cc = &data_801800
                
                ecx_23 = arg2
                edx_15 = arg6
                var_8_5.b = 6
            else
                var_8_5.b = 0x53
                char* ecx_194 = &data_801800
                char* eax_180 = *sub_59d790(esi_4, eax_178, &var_14, 1, 1, 0, var_1a4_8)
                char* edx_119 = &data_801800
                result = arg3
                
                if (eax_180 != 0)
                    ecx_194 = eax_180
                
                char* eax_181 = *result
                
                if (eax_181 != 0)
                    edx_119 = eax_181
                
                var_8_5.b = 0x54
                char* var_c0
                sub_63d850(result, sub_63dfa0(eax_181, edx_119, &var_c0, "[pile]", ecx_194))
                var_8_5.b = 0x55
                
                if (data_cf65bc != 0)
                    char* eax_183 = var_c0
                    
                    if (eax_183 != 0 && *eax_183 != 0)
                        char* eax_184 = sub_63d4e0(&var_c0)
                        int32_t temp32_1 = *(eax_184 + 4)
                        *(eax_184 + 4) -= 1
                        
                        if (temp32_1 == 1)
                            sub_64c080(eax_184, *(eax_184 + 0xc) + 0x10)
                            var_c0 = &data_801800
                
                var_8_5.b = 0x56
                
                if (data_cf65bc != 0)
                    char* const var_c4
                    char* eax_185 = var_c4
                    
                    if (eax_185 != 0 && *eax_185 != 0)
                        char* eax_186 = sub_63d4e0(&var_c4)
                        int32_t temp50_1 = *(eax_186 + 4)
                        *(eax_186 + 4) -= 1
                        
                        if (temp50_1 == 1)
                            sub_64c080(eax_186, *(eax_186 + 0xc) + 0x10)
                            var_c4 = &data_801800
                
                ecx_23 = arg2
                edx_15 = arg6
                var_8_5.b = 6
            
            goto label_59b64f
        case 0x10, 0x11
            char const* const esi_15 = "[pile]"
            
            if (eax_30 == 0x10)
                esi_15 = "[pile2]"
            
            int32_t eax_195 = sub_59a910(eax_4, 2)
            void* ecx_209 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_1a0_46 = 0
            var_14 = ecx_209
            arg_4 = edi_3
            var_8_5.b = 0x5b
            char* ecx_210 = &data_801800
            char* eax_197 = *sub_59d790(esi_15, eax_195, &var_14, 1, 1, 0, ecx_209.b)
            char* edx_131 = &data_801800
            
            if (eax_197 != 0)
                ecx_210 = eax_197
            
            char* eax_199 = *arg3
            
            if (eax_199 != 0)
                edx_131 = eax_199
            
            var_8_5.b = 0x5c
            result = arg3
            char* var_d0
            sub_63d850(result, sub_63dfa0(eax_199, edx_131, &var_d0, esi_15, ecx_210))
            var_8_5.b = 0x5d
            
            if (data_cf65bc != 0)
                char* eax_201 = var_d0
                
                if (eax_201 != 0 && *eax_201 != 0)
                    char* eax_202 = sub_63d4e0(&var_d0)
                    int32_t temp33_1 = *(eax_202 + 4)
                    *(eax_202 + 4) -= 1
                    
                    if (temp33_1 == 1)
                        sub_64c080(eax_202, *(eax_202 + 0xc) + 0x10)
                        var_d0 = &data_801800
            
            var_8_5.b = 0x5e
            
            if (data_cf65bc != 0)
                char* const var_d4
                char* eax_203 = var_d4
                
                if (eax_203 != 0 && *eax_203 != 0)
                    char* eax_204 = sub_63d4e0(&var_d4)
                    int32_t temp51_1 = *(eax_204 + 4)
                    *(eax_204 + 4) -= 1
                    
                    if (temp51_1 == 1)
                        sub_64c080(eax_204, *(eax_204 + 0xc) + 0x10)
                        var_d4 = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0x12
            int32_t eax_151 = sub_59a910(eax_4, 1)
            void* ecx_165 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_1a0_32 = 0
            var_14 = ecx_165
            arg_4 = edi_3
            var_8_5.b = 0x47
            char* ecx_166 = &data_801800
            char* eax_153 = *sub_59d790(esi_4, eax_151, &var_14, 1, 1, 0, ecx_165.b)
            char* edx_101 = &data_801800
            result = arg3
            
            if (eax_153 != 0)
                ecx_166 = eax_153
            
            char* eax_154 = *result
            
            if (eax_154 != 0)
                edx_101 = eax_154
            
            var_8_5.b = 0x48
            char* var_a8
            sub_63d850(result, sub_63dfa0(eax_154, edx_101, &var_a8, "[card]", ecx_166))
            var_8_5.b = 0x49
            
            if (data_cf65bc != 0)
                char* eax_156 = var_a8
                
                if (eax_156 != 0 && *eax_156 != 0)
                    char* eax_157 = sub_63d4e0(&var_a8)
                    int32_t temp12_1 = *(eax_157 + 4)
                    *(eax_157 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_64c080(eax_157, *(eax_157 + 0xc) + 0x10)
                        var_a8 = &data_801800
            
            var_8_5.b = 0x4a
            
            if (data_cf65bc != 0)
                char* const var_ac
                char* eax_158 = var_ac
                
                if (eax_158 != 0 && *eax_158 != 0)
                    char* eax_159 = sub_63d4e0(&var_ac)
                    int32_t temp28_1 = *(eax_159 + 4)
                    *(eax_159 + 4) -= 1
                    
                    if (temp28_1 == 1)
                        sub_64c080(eax_159, *(eax_159 + 0xc) + 0x10)
                        var_ac = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0x13
            int32_t eax_160 = sub_59a910(eax_4, 1)
            void* ecx_174 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_1a0_35 = 0
            var_14 = ecx_174
            arg_4 = edi_3
            var_8_5.b = 0x4b
            char* ecx_175 = &data_801800
            char* eax_162 = *sub_59d790(esi_4, eax_160, &var_14, 1, 1, 0, ecx_174.b)
            char* edx_107 = &data_801800
            result = arg3
            
            if (eax_162 != 0)
                ecx_175 = eax_162
            
            char* eax_163 = *result
            
            if (eax_163 != 0)
                edx_107 = eax_163
            
            var_8_5.b = 0x4c
            char* var_b0
            sub_63d850(result, sub_63dfa0(eax_163, edx_107, &var_b0, "[card1]", ecx_175))
            var_8_5.b = 0x4d
            
            if (data_cf65bc != 0)
                char* eax_165 = var_b0
                
                if (eax_165 != 0 && *eax_165 != 0)
                    char* eax_166 = sub_63d4e0(&var_b0)
                    int32_t temp13_1 = *(eax_166 + 4)
                    *(eax_166 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        sub_64c080(eax_166, *(eax_166 + 0xc) + 0x10)
                        var_b0 = &data_801800
            
            var_8_5.b = 0x4e
            
            if (data_cf65bc != 0)
                char* const var_b4
                char* eax_167 = var_b4
                
                if (eax_167 != 0 && *eax_167 != 0)
                    char* eax_168 = sub_63d4e0(&var_b4)
                    int32_t temp29_1 = *(eax_168 + 4)
                    *(eax_168 + 4) -= 1
                    
                    if (temp29_1 == 1)
                        sub_64c080(eax_168, *(eax_168 + 0xc) + 0x10)
                        var_b4 = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0x14
            int32_t eax_169 = sub_59a910(eax_4, 1)
            void* ecx_183 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_1a0_38 = 0
            var_14 = ecx_183
            arg_4 = edi_3
            var_8_5.b = 0x4f
            char* ecx_184 = &data_801800
            char* eax_171 = *sub_59d790(esi_4, eax_169, &var_14, 1, 1, 0, ecx_183.b)
            char* edx_113 = &data_801800
            result = arg3
            
            if (eax_171 != 0)
                ecx_184 = eax_171
            
            char* eax_172 = *result
            
            if (eax_172 != 0)
                edx_113 = eax_172
            
            var_8_5.b = 0x50
            char* var_b8
            sub_63d850(result, sub_63dfa0(eax_172, edx_113, &var_b8, "[card2]", ecx_184))
            var_8_5.b = 0x51
            
            if (data_cf65bc != 0)
                char* eax_174 = var_b8
                
                if (eax_174 != 0 && *eax_174 != 0)
                    char* eax_175 = sub_63d4e0(&var_b8)
                    int32_t temp14_1 = *(eax_175 + 4)
                    *(eax_175 + 4) -= 1
                    
                    if (temp14_1 == 1)
                        sub_64c080(eax_175, *(eax_175 + 0xc) + 0x10)
                        var_b8 = &data_801800
            
            var_8_5.b = 0x52
            
            if (data_cf65bc != 0)
                char* const var_bc
                char* eax_176 = var_bc
                
                if (eax_176 != 0 && *eax_176 != 0)
                    char* eax_177 = sub_63d4e0(&var_bc)
                    int32_t temp30_1 = *(eax_177 + 4)
                    *(eax_177 + 4) -= 1
                    
                    if (temp30_1 == 1)
                        sub_64c080(eax_177, *(eax_177 + 0xc) + 0x10)
                        var_bc = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0x15
            int32_t eax_310 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            int32_t var_1a0_72 = 2
            arg_4 = edi_3
            int32_t var_184 = 2
            int32_t var_180_1 = 0
            var_8_5.b = 0x8b
            char* ecx_310 = &data_801800
            char* eax_313 = *sub_599fa0(&var_184, arg2, &i_1, &var_184, eax_310, 0)
            char* edx_204 = &data_801800
            result = arg3
            
            if (eax_313 != 0)
                ecx_310 = eax_313
            
            char* eax_314 = *result
            
            if (eax_314 != 0)
                edx_204 = eax_314
            
            var_8_5.b = 0x8c
            char* var_128
            sub_63d850(result, sub_63dfa0(eax_314, edx_204, &var_128, "[cost]", ecx_310))
            var_8_5.b = 0x8d
            
            if (data_cf65bc != 0)
                char* eax_316 = var_128
                
                if (eax_316 != 0 && *eax_316 != 0)
                    char* eax_317 = sub_63d4e0(&var_128)
                    int32_t temp21_1 = *(eax_317 + 4)
                    *(eax_317 + 4) -= 1
                    
                    if (temp21_1 == 1)
                        sub_64c080(eax_317, *(eax_317 + 0xc) + 0x10)
                        var_128 = &data_801800
            
            var_8_5.b = 0x8e
            
            if (data_cf65bc != 0)
                char* i_3 = i_1
                
                if (i_3 != 0 && *i_3 != 0)
                    char* eax_318 = sub_63d4e0(&i_1)
                    int32_t temp43_1 = *(eax_318 + 4)
                    *(eax_318 + 4) -= 1
                    
                    if (temp43_1 == 1)
                        sub_64c080(eax_318, *(eax_318 + 0xc) + 0x10)
                        i_1 = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0x16
            edi_3 = &edi_3[1]
            arg_4 = edi_3
        label_59b646:
            ecx_23 = arg2
        label_59b649:
            result = arg3
        label_59b64f:
            eax_29 = var_50_1 + 1
            var_50_1 = eax_29
            
            if (eax_29 s>= 4)
                break
            
            esi_4 = arg_8
            continue
        case 0x17
            ecx_23 = arg2
            
            if (ecx_23 != 3)
                goto label_59b649
            
            eax_30 = *(esi_4 + 0x14)
            void* esi_5 = &ecx_23[0xfffffffe]
            var_14 = eax_30
            ebx_11.b = eax_30 != esi_5
            int32_t edi_4 = 0
            
            if (eax_30 s> 0)
                char ecx_24 = esi_5.b
                
                do
                    if (edi_4 s< 0)
                        goto label_59d1de
                    
                    if (edi_4 s>= data_1597e48)
                        goto label_59d1de
                    
                    int32_t eax_31 = data_1597e44
                    char ebx_12 = ebx_11.b
                    
                    if (*(eax_31 + (edi_4 << 3) + 4) != 1)
                        ebx_12 = ecx_24
                    
                    void* eax_32 = sub_598510(3, *(eax_31 + (edi_4 << 3)))
                    ecx_24 = 1
                    ebx_11 = zx.d(ebx_12)
                    eax_30 = *(eax_32 + 0xc)
                    
                    if (*(eax_32 + 0x18) != 0)
                        ebx_11 = 1
                    
                    if (esi_5 == 1)
                        esi_5 = eax_30
                    else if (esi_5 == 3)
                        bool cond:45_1 = eax_30 == 2
                        eax_30 = 2
                        
                        if (cond:45_1)
                            esi_5 = 2
                    
                    edi_4 += 1
                while (edi_4 s< var_14)
            
            char* var_2c
            sub_63d720(&var_2c, 0x824da0)
            var_8_5.b = 0xd
            char* esi_6
            
            if (esi_5 != 3)
                esi_6 = var_2c
            else
                char* eax_33 = var_2c
                
                if (eax_33 == 0 || *eax_33 == 0)
                    int32_t** eax_35 = sub_64bfd0(0x12)
                    eax_35[3] += 1
                    
                    if (*eax_35 == 0)
                        sub_64be70(eax_35)
                    
                    int32_t* esi_7 = *eax_35
                    char* ecx_29 = &data_824db0
                    *eax_35 = *esi_7
                    *esi_7 = 0xfafafafa
                    esi_7[1] = 1
                    esi_7[2] = 1
                    esi_7[3] = 2
                    esi_6 = &esi_7[4]
                    var_2c = esi_6
                    int32_t* eax_36
                    
                    do
                        eax_36.b = *ecx_29
                        ecx_29 = &ecx_29[1]
                        ecx_29[esi_6 + 0xff7db24f] = eax_36.b
                    while (eax_36.b != 0)
                else
                    char* eax_34 = sub_63d4e0(&var_2c)
                    int16_t* edi_5 = *(eax_34 + 8)
                    sub_63d5e0(eax_34, edi_5 + 1, &var_2c, 1)
                    esi_6 = var_2c
                    *(edi_5 + esi_6) = 0x65
            
            if (ebx_11.b != 0)
                if (esi_6 == 0 || *esi_6 == 0)
                    int32_t** eax_38 = sub_64bfd0(0x12)
                    eax_38[3] += 1
                    
                    if (*eax_38 == 0)
                        sub_64be70(eax_38)
                    
                    int32_t* esi_8 = *eax_38
                    char* ecx_33 = &data_824db4
                    *eax_38 = *esi_8
                    *esi_8 = 0xfafafafa
                    esi_8[1] = 1
                    esi_8[2] = 1
                    esi_8[3] = 2
                    esi_6 = &esi_8[4]
                    var_2c = esi_6
                    int32_t* eax_39
                    
                    do
                        eax_39.b = *ecx_33
                        ecx_33 = &ecx_33[1]
                        ecx_33[esi_6 + 0xff7db24b] = eax_39.b
                    while (eax_39.b != 0)
                else
                    char* eax_37 = sub_63d4e0(&var_2c)
                    int16_t* edi_7 = *(eax_37 + 8)
                    sub_63d5e0(eax_37, edi_7 + 1, &var_2c, 1)
                    esi_6 = var_2c
                    *(edi_7 + esi_6) = 0x73
            
            char* ecx_34 = &data_801800
            char* edx_23 = &data_801800
            
            if (esi_6 != 0)
                ecx_34 = esi_6
            
            char* eax_40 = *arg3
            
            if (eax_40 != 0)
                edx_23 = eax_40
            
            var_8_5.b = 0xe
            char* var_12c
            sub_63d850(arg3, sub_63dfa0(eax_40, edx_23, &var_12c, "[revealed]", ecx_34))
            var_8_5.b = 0xf
            
            if (data_cf65bc != 0)
                char* eax_42 = var_12c
                
                if (eax_42 != 0 && *eax_42 != 0)
                    char* eax_43 = sub_63d4e0(&var_12c)
                    int32_t temp61_1 = *(eax_43 + 4)
                    *(eax_43 + 4) -= 1
                    
                    if (temp61_1 == 1)
                        sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
                        var_12c = &data_801800
            
            var_8_5.b = 0x10
            
            if (data_cf65bc != 0 && esi_6 != 0 && *esi_6 != 0)
                char* eax_44 = sub_63d4e0(&var_2c)
                int32_t temp62_1 = *(eax_44 + 4)
                *(eax_44 + 4) -= 1
                
                if (temp62_1 == 1)
                    sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)
                    var_2c = &data_801800
            
            var_8_5.b = 6
            ebx_11 = var_24
            goto label_59b640
        case 0x18
            int32_t eax_62 = sub_59a910(eax_4, 2)
            int32_t var_1ac_2 = 1
            var_8_5.b = 0x19
            char* ecx_60 = &data_801800
            char* var_80
            char* eax_64 =
                *sub_5991e0(eax_62, arg2, &var_80, eax_62, *(esi_4 + 0x10), (*(esi_4 + 0x14)).b)
            char* edx_40 = &data_801800
            result = arg3
            
            if (eax_64 != 0)
                ecx_60 = eax_64
            
            char* eax_65 = *result
            
            if (eax_65 != 0)
                edx_40 = eax_65
            
            var_8_5.b = 0x1a
            char* var_7c
            sub_63d850(result, sub_63dfa0(eax_65, edx_40, &var_7c, "[piles]", ecx_60))
            var_8_5.b = 0x1b
            
            if (data_cf65bc != 0)
                char* eax_67 = var_7c
                
                if (eax_67 != 0 && *eax_67 != 0)
                    char* eax_68 = sub_63d4e0(&var_7c)
                    int32_t temp8_1 = *(eax_68 + 4)
                    *(eax_68 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_64c080(eax_68, *(eax_68 + 0xc) + 0x10)
                        var_7c = &data_801800
            
            var_8_5.b = 0x1c
            
            if (data_cf65bc != 0)
                char* eax_69 = var_80
                
                if (eax_69 != 0 && *eax_69 != 0)
                    char* eax_70 = sub_63d4e0(&var_80)
                    int32_t temp24_1 = *(eax_70 + 4)
                    *(eax_70 + 4) -= 1
                    
                    if (temp24_1 == 1)
                        sub_64c080(eax_70, *(eax_70 + 0xc) + 0x10)
                        var_80 = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        case 0x19
            int32_t esi_9 = (&var_3c)[edi_3]
            arg_4 = &edi_3[1]
            void* var_5c
            sub_63d720(&var_5c, "{log_stamp}")
            var_8_5.b = 0x1d
            void* eax_71 = sub_516f30(esi_9)
            char** eax_72 = sub_68c730(*(eax_71 + 4), arg2, eax_71)
            char* edx_46
            
            if (eax_72 != 0)
                char* eax_73 = *eax_72
                edx_46 = &data_801800
                
                if (eax_73 != 0)
                    edx_46 = eax_73
            else
                edx_46 = *(eax_71 + 4)
                
                if (edx_46 == 0)
                    sub_63b870(eax_72, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                        "XString::XString")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
            
            char* var_48
            sub_63d720(&var_48, edx_46)
            int32_t ebx_14 = ebx_11 | 0x40
            int32_t var_20_8 = ebx_14
            var_8_5.b = 0x20
            void* eax_74 = var_5c
            var_28 = eax_74
            
            if (eax_74 != 0 && *eax_74 != 0)
                char* eax_75 = sub_63d4e0(&var_28)
                *(eax_75 + 4) += 1
            
            char* eax_76 = var_48
            int32_t ebx_15 = ebx_14 | 0x80
            int32_t var_20_9 = ebx_15
            char* ecx_73 = &data_801800
            
            if (eax_76 != 0)
                ecx_73 = eax_76
            
            sub_63d960(&var_28, ecx_73)
            char* var_58
            sub_63d720(&var_58, "{log_white}")
            var_8_5.b = 0x22
            void* esi_11 = var_28
            var_24 = esi_11
            
            if (esi_11 != 0 && *esi_11 != 0)
                char* eax_77 = sub_63d4e0(&var_24)
                *(eax_77 + 4) += 1
            
            char* eax_78 = var_58
            int32_t ebx_16 = ebx_15 | 0x100
            int32_t var_20_10 = ebx_16
            char* ecx_77 = &data_801800
            
            if (eax_78 != 0)
                ecx_77 = eax_78
            
            sub_63d960(&var_24, ecx_77)
            void* edi_10 = var_24
            void* ecx_79 = &data_801800
            char* edx_48 = &data_801800
            
            if (edi_10 != 0)
                ecx_79 = edi_10
            
            char* eax_80 = *arg3
            
            if (eax_80 != 0)
                edx_48 = eax_80
            
            var_8_5.b = 0x23
            char* var_84
            sub_63d850(arg3, sub_63dfa0(eax_80, edx_48, &var_84, "[stamp]", ecx_79))
            var_8_5.b = 0x24
            
            if (data_cf65bc != 0)
                char* eax_82 = var_84
                
                if (eax_82 != 0 && *eax_82 != 0)
                    char* eax_83 = sub_63d4e0(&var_84)
                    int32_t temp63_1 = *(eax_83 + 4)
                    *(eax_83 + 4) -= 1
                    
                    if (temp63_1 == 1)
                        sub_64c080(eax_83, *(eax_83 + 0xc) + 0x10)
                        var_84 = &data_801800
            
            int32_t ebx_17 = ebx_16 & 0xfffffeff
            int32_t var_20_11 = ebx_17
            var_8_5.b = 0x25
            
            if (data_cf65bc != 0 && edi_10 != 0 && *edi_10 != 0)
                char* eax_84 = sub_63d4e0(&var_24)
                int32_t temp65_1 = *(eax_84 + 4)
                *(eax_84 + 4) -= 1
                
                if (temp65_1 == 1)
                    sub_64c080(eax_84, *(eax_84 + 0xc) + 0x10)
                    var_24 = &data_801800
            
            var_8_5.b = 0x26
            
            if (data_cf65bc != 0)
                char* eax_85 = var_58
                
                if (eax_85 != 0 && *eax_85 != 0)
                    char* eax_86 = sub_63d4e0(&var_58)
                    int32_t temp67_1 = *(eax_86 + 4)
                    *(eax_86 + 4) -= 1
                    
                    if (temp67_1 == 1)
                        sub_64c080(eax_86, *(eax_86 + 0xc) + 0x10)
                        var_58 = &data_801800
            
            ebx_11 = ebx_17 & 0xffffff7f
            var_24 = ebx_11
            void* var_20_12 = ebx_11
            var_8_5.b = 0x27
            
            if (data_cf65bc != 0 && esi_11 != 0 && *esi_11 != 0)
                char* eax_87 = sub_63d4e0(&var_28)
                int32_t temp69_1 = *(eax_87 + 4)
                *(eax_87 + 4) -= 1
                
                if (temp69_1 == 1)
                    sub_64c080(eax_87, *(eax_87 + 0xc) + 0x10)
                    var_28 = &data_801800
            
            var_8_5.b = 0x28
            
            if (data_cf65bc != 0)
                char* eax_88 = var_48
                
                if (eax_88 != 0 && *eax_88 != 0)
                    char* eax_89 = sub_63d4e0(&var_48)
                    int32_t temp71_1 = *(eax_89 + 4)
                    *(eax_89 + 4) -= 1
                    
                    if (temp71_1 == 1)
                        sub_64c080(eax_89, *(eax_89 + 0xc) + 0x10)
                        var_48 = &data_801800
            
            var_8_5.b = 0x29
            
            if (data_cf65bc != 0)
                void* eax_90 = var_5c
                
                if (eax_90 != 0 && *eax_90 != 0)
                    char* eax_91 = sub_63d4e0(&var_5c)
                    int32_t temp73_1 = *(eax_91 + 4)
                    *(eax_91 + 4) -= 1
                    
                    if (temp73_1 == 1)
                        sub_64c080(eax_91, *(eax_91 + 0xc) + 0x10)
                        var_5c = &data_801800
            
        label_59b63c:
            var_8_5.b = 6
        label_59b640:
            edi_3 = arg_4
            edx_15 = arg6
            goto label_59b646
        case 0x1a
            int32_t esi_12 = (&var_3c)[edi_3]
            arg_4 = &edi_3[1]
            void* var_64
            sub_63d720(&var_64, "{log_twist}")
            var_8_5.b = 0x2a
            int32_t eax_93 = sub_516f30(esi_12)
            void* eax_94 = sub_68c730(*(eax_93 + 4), arg2, eax_93)
            char* edx_62
            
            if (eax_94 != 0)
                char* eax_95 = *eax_94
                edx_62 = &data_801800
                
                if (eax_95 != 0)
                    edx_62 = eax_95
            else
                edx_62 = *(eax_93 + 4)
                
                if (edx_62 == 0)
                    sub_63b870(eax_94, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                        "XString::XString")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
            
            char* var_4c
            sub_63d720(&var_4c, edx_62)
            int32_t ebx_18 = ebx_11 | 0x200
            int32_t var_20_13 = ebx_18
            var_8_5.b = 0x2d
            void* eax_96 = var_64
            var_14 = eax_96
            
            if (eax_96 != 0 && *eax_96 != 0)
                char* eax_97 = sub_63d4e0(&var_14)
                *(eax_97 + 4) += 1
            
            char* eax_98 = var_4c
            int32_t ebx_19 = ebx_18 | 0x400
            int32_t var_20_14 = ebx_19
            char* const ecx_100 = &data_801800
            
            if (eax_98 != 0)
                ecx_100 = eax_98
            
            sub_63d960(&var_14, ecx_100)
            char* var_60
            sub_63d720(&var_60, "{log_white}")
            var_8_5.b = 0x2f
            void* esi_14 = var_14
            var_28 = esi_14
            
            if (esi_14 != 0 && *esi_14 != 0)
                char* eax_99 = sub_63d4e0(&var_28)
                *(eax_99 + 4) += 1
            
            char* eax_100 = var_60
            int32_t ebx_20 = ebx_19 | 0x800
            int32_t var_20_15 = ebx_20
            char* ecx_104 = &data_801800
            
            if (eax_100 != 0)
                ecx_104 = eax_100
            
            sub_63d960(&var_28, ecx_104)
            void* edi_12 = var_28
            void* ecx_106 = &data_801800
            char* edx_64 = &data_801800
            
            if (edi_12 != 0)
                ecx_106 = edi_12
            
            char* eax_102 = *arg3
            
            if (eax_102 != 0)
                edx_64 = eax_102
            
            var_8_5.b = 0x30
            char* var_88
            sub_63d850(arg3, sub_63dfa0(eax_102, edx_64, &var_88, "[twist]", ecx_106))
            var_8_5.b = 0x31
            
            if (data_cf65bc != 0)
                char* eax_104 = var_88
                
                if (eax_104 != 0 && *eax_104 != 0)
                    char* eax_105 = sub_63d4e0(&var_88)
                    int32_t temp64_1 = *(eax_105 + 4)
                    *(eax_105 + 4) -= 1
                    
                    if (temp64_1 == 1)
                        sub_64c080(eax_105, *(eax_105 + 0xc) + 0x10)
                        var_88 = &data_801800
            
            int32_t ebx_21 = ebx_20 & 0xfffff7ff
            int32_t var_20_16 = ebx_21
            var_8_5.b = 0x32
            
            if (data_cf65bc != 0 && edi_12 != 0 && *edi_12 != 0)
                char* eax_106 = sub_63d4e0(&var_28)
                int32_t temp66_1 = *(eax_106 + 4)
                *(eax_106 + 4) -= 1
                
                if (temp66_1 == 1)
                    sub_64c080(eax_106, *(eax_106 + 0xc) + 0x10)
                    var_28 = &data_801800
            
            var_8_5.b = 0x33
            
            if (data_cf65bc != 0)
                char* eax_107 = var_60
                
                if (eax_107 != 0 && *eax_107 != 0)
                    char* eax_108 = sub_63d4e0(&var_60)
                    int32_t temp68_1 = *(eax_108 + 4)
                    *(eax_108 + 4) -= 1
                    
                    if (temp68_1 == 1)
                        sub_64c080(eax_108, *(eax_108 + 0xc) + 0x10)
                        var_60 = &data_801800
            
            ebx_11 = ebx_21 & 0xfffffbff
            var_24 = ebx_11
            void* var_20_17 = ebx_11
            var_8_5.b = 0x34
            
            if (data_cf65bc != 0 && esi_14 != 0 && *esi_14 != 0)
                char* eax_109 = sub_63d4e0(&var_14)
                int32_t temp70_1 = *(eax_109 + 4)
                *(eax_109 + 4) -= 1
                
                if (temp70_1 == 1)
                    sub_64c080(eax_109, *(eax_109 + 0xc) + 0x10)
                    var_14 = &data_801800
            
            var_8_5.b = 0x35
            
            if (data_cf65bc != 0)
                char* eax_110 = var_4c
                
                if (eax_110 != 0 && *eax_110 != 0)
                    char* eax_111 = sub_63d4e0(&var_4c)
                    int32_t temp72_1 = *(eax_111 + 4)
                    *(eax_111 + 4) -= 1
                    
                    if (temp72_1 == 1)
                        sub_64c080(eax_111, *(eax_111 + 0xc) + 0x10)
                        var_4c = &data_801800
            
            var_8_5.b = 0x36
            
            if (data_cf65bc != 0)
                void* eax_112 = var_64
                
                if (eax_112 != 0 && *eax_112 != 0)
                    char* eax_113 = sub_63d4e0(&var_64)
                    int32_t temp74_1 = *(eax_113 + 4)
                    *(eax_113 + 4) -= 1
                    
                    if (temp74_1 == 1)
                        sub_64c080(eax_113, *(eax_113 + 0xc) + 0x10)
                        var_64 = &data_801800
            
            goto label_59b63c
        case 0x1b
            void* eax_114 = (&var_3c)[edi_3]
            edi_3 = &edi_3[1]
            var_14 = eax_114
            arg_4 = edi_3
            int32_t eax_115
            char ecx_122
            eax_115, ecx_122 = sub_59a910(eax_4, 1)
            int32_t var_1a0_20 = 0
            uint32_t ecx_124 = zx.d(arg6.b) & 0x10
            int32_t ecx_125 = neg.d(ecx_124)
            var_8_5.b = 0x37
            char* ecx_128 = &data_801800
            char* eax_117 = *sub_59d790(esi_4, eax_115, &var_14, 1, 
                sbb.d(ecx_125, ecx_125, ecx_124 != 0) + 2, 0, ecx_122)
            char* edx_78 = &data_801800
            result = arg3
            
            if (eax_117 != 0)
                ecx_128 = eax_117
            
            char* eax_118 = *result
            
            if (eax_118 != 0)
                edx_78 = eax_118
            
            var_8_5.b = 0x38
            char* var_8c
            sub_63d850(result, sub_63dfa0(eax_118, edx_78, &var_8c, "[throne]", ecx_128))
            var_8_5.b = 0x39
            
            if (data_cf65bc != 0)
                char* eax_120 = var_8c
                
                if (eax_120 != 0 && *eax_120 != 0)
                    char* eax_121 = sub_63d4e0(&var_8c)
                    int32_t temp9_1 = *(eax_121 + 4)
                    *(eax_121 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_64c080(eax_121, *(eax_121 + 0xc) + 0x10)
                        var_8c = &data_801800
            
            var_8_5.b = 0x3a
            
            if (data_cf65bc != 0)
                char* const var_90
                char* eax_122 = var_90
                
                if (eax_122 != 0 && *eax_122 != 0)
                    char* eax_123 = sub_63d4e0(&var_90)
                    int32_t temp25_1 = *(eax_123 + 4)
                    *(eax_123 + 4) -= 1
                    
                    if (temp25_1 == 1)
                        sub_64c080(eax_123, *(eax_123 + 0xc) + 0x10)
                        var_90 = &data_801800
            
            ecx_23 = arg2
            edx_15 = arg6
            var_8_5.b = 6
            goto label_59b64f
        default
            char const* const var_1a0_78 = "LogDoReplacements"
            var_1a4_15 = 0x7db
            ecx_317 = "Halt"
        label_59d14e:
            sub_63b870(eax_30, &data_801800, ecx_317, "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", 
                var_1a4_15, "LogDoReplacements")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn

if (*(arg_8 + 0x2c) != 0)
    int32_t var_1a0_75 = 0
    char** eax_321 = sub_59d790(result, 1, &arg_8[0x2c], 1, 1, 0, ecx_23.b)
    char** var_1a0_76 = eax_321
    var_8_5.b = 0x8f
    var_8_5.b = 0x90
    sub_63d850(result, sub_599090(eax_321, arg2, &arg_8, nullptr, "[entry]", result, "[source]"))
    var_8_5.b = 0x91
    
    if (data_cf65bc != 0)
        char* eax_323 = arg_8
        
        if (eax_323 != 0 && *eax_323 != 0)
            char* eax_324 = sub_63d4e0(&arg_8)
            int32_t temp45_1 = *(eax_324 + 4)
            *(eax_324 + 4) -= 1
            
            if (temp45_1 == 1)
                sub_64c080(eax_324, *(eax_324 + 0xc) + 0x10)
                arg_8 = &data_801800
    
    var_8_5.b = 0x92
    
    if (data_cf65bc != 0)
        char* eax_325 = arg_c
        
        if (eax_325 != 0 && *eax_325 != 0)
            char* eax_326 = sub_63d4e0(&arg_c)
            int32_t temp57_1 = *(eax_326 + 4)
            *(eax_326 + 4) -= 1
            
            if (temp57_1 == 1)
                sub_64c080(eax_326, *(eax_326 + 0xc) + 0x10)

int32_t var_8_6 = 0x93

if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
    char* eax_328 = sub_63d4e0(&var_138)
    int32_t temp44_1 = *(eax_328 + 4)
    *(eax_328 + 4) -= 1
    
    if (temp44_1 == 1)
        sub_64c080(eax_328, *(eax_328 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
