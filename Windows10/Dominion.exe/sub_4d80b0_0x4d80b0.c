// 函数: sub_4d80b0
// 地址: 0x4d80b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_763a40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
void* ecx
int32_t* edx
ecx, edx = __chkstk(0x1210)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t esi
var_24 = esi
int32_t edi
int32_t var_28 = edi
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_1 = edx
int32_t* var_1220 = esi_1
*(ecx + 0x1e1a0) = esi_1[2]
*(ecx + 0x1e1a4) = esi_1[3]
uint32_t i = esi_1[4]
*(ecx + 0x1e1a8) = i
uint32_t i_1 = 0

if (esi_1[2] s> 0)
    int32_t edx_1 = 0
    void* edi_1 = ecx + 0x56e8
    int32_t var_121c_1 = 0
    void* var_11f8_1 = edi_1
    
    do
        int32_t** esi_3 = *esi_1 + edx_1
        *(edi_1 - 0x1428) = esi_3[0x1b3]
        *(edi_1 - 0x1424) = esi_3[0x1b4]
        *(edi_1 - 0x1420) = esi_3[0x1b6]
        *(edi_1 - 0x141c) = esi_3[0x1b5]
        int32_t* j_29 = esi_3[0x15a]
        sub_63d8d0(edi_1 - 0x14a0, j_29)
        j_29 = esi_3[2]
        sub_63d8d0(edi_1 - 0x1490, j_29)
        *(edi_1 - 0x148c) = esi_3[6]
        j_29 = esi_3[0x158]
        sub_63d8d0(edi_1 - 0x14a4, j_29)
        __builtin_memcpy(edi_1 - 0x21ac, &esi_3[0x174], 0x80)
        *(var_11f8_1 - 0x21b0) = esi_3[0x15d]
        *(var_11f8_1 - 0x14ac) = esi_3[0x198]
        j_29 = esi_3[0x196] * 0x14
        int32_t var_34_1 = esi_3[0x194]
        void* var_38_1 = var_11f8_1 - 0x212c
        memcpy()
        *(var_11f8_1 - 0x21e0) = esi_3[0x15c]
        j_29 = esi_3[0x15e]
        sub_63d8d0(var_11f8_1 - 0x21dc, j_29)
        int32_t j_13 = 0xa
        void* j_16 = &esi_3[0x160]
        void* j_27 = j_16
        void* edi_4 = var_11f8_1 - 0x56e8
        void* var_120c_1 = var_11f8_1 - 0x56e8
        int32_t j
        
        do
            j_29 = *j_27
            sub_63d8d0(edi_4 + 0x3510, j_29)
            j = j_13
            j_13 -= 1
            j_27 += 8
            edi_4 += 4
        while (j != 1)
        int32_t j_14 = 3
        *(var_11f8_1 - 0x14a8) = esi_3[0x199].b
        *(var_11f8_1 - 0x1434) = esi_3[0x1b7]
        *(var_11f8_1 - 0x1430) = esi_3[0x1b8]
        *(var_11f8_1 - 0x142c) = esi_3[0x1b9]
        *(var_11f8_1 - 0x1418) = esi_3[0x1be]
        *(var_11f8_1 - 0x1414) = esi_3[0x1bf]
        j_16 = &esi_3[8]
        void* j_28 = j_16
        void* edi_6 = var_11f8_1 - 0x56d8
        void* var_1204_1 = var_11f8_1 - 0x56d8
        int32_t j_1
        
        do
            j_29 = sub_4d7240(j_28)
            int32_t var_14_1 = 0
            sub_4b4ab0(edi_6, j_29)
            int32_t var_14_2 = 0xffffffff
            void var_11e8
            Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_11e8)
            j_28 += 0x1c0
            edi_6 += 0x11a8
            j_1 = j_14
            j_14 -= 1
        while (j_1 != 1)
        int32_t** esi_7 = esi_3
        void* edi_7 = var_11f8_1
        j_29 = esi_7[4]
        sub_63d8d0(edi_7 - 0x56e4, j_29)
        *(edi_7 - 0x1488) = *(esi_7 + 0x670)
        *(edi_7 - 0x1478) = *(esi_7 + 0x680)
        *(edi_7 - 0x1468) = *(esi_7 + 0x690)
        *(edi_7 - 0x56e0) = esi_7[7]
        void* eax_29 = edi_7 - 0x56e8
        j_29 = *esi_7
        sub_63d8d0(eax_29, j_29)
        *(edi_7 - 0x1438) = esi_7[0x1b2]
        *(edi_7 - 0x149c) = esi_7[0x19a]
        *(edi_7 - 0x1498) = esi_7[0x19b]
        *(edi_7 - 0x10) = esi_7[0x1f0]
        int32_t j_12 = 0
        
        if (esi_7[0x1f0] s> 0)
            void* j_17 = nullptr
            void* edi_8 = edi_7 - 0x1408
            j_16 = nullptr
            int32_t j_2
            
            do
                int32_t* edx_4 = esi_7[0x1ee] + j_17
                *(edi_8 - 8) = *edx_4
                *(edi_8 - 4) = edx_4[1]
                *edi_8 = edx_4[2]
                int32_t eax_37 = edx_4[4]
                *(edi_8 + 0xc) = edx_4[5]
                *(edi_8 + 8) = eax_37
                int32_t eax_38 = edx_4[6]
                *(edi_8 + 0x14) = edx_4[7]
                *(edi_8 + 0x10) = eax_38
                j_29 = edx_4[8]
                sub_63d8d0(edi_8 + 0x18, j_29)
                edi_8 += 0x28
                j_2 = j_12 + 1
                j_17 = j_16 + 0x28
                j_12 = j_2
                j_16 = j_17
            while (j_2 s< esi_7[0x1f0])
            edi_7 = var_11f8_1
        
        void* eax_75 = esi_7[0x1f8]
        *(edi_7 + 0x200) = eax_75
        char const* const ecx_44
        
        if (eax_75 s< 0)
            j_29 = "ToSettings"
            int32_t var_34_14 = 0x484
            ecx_44 = "dest.profiles[i].smartplays.numSmartplays >= 0"
        label_4d8a53:
            char const* const var_38_5 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
            sub_63b870(eax_75, &data_801800, ecx_44)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        j_29 = esi_7[0x1f8] << 3
        int32_t var_34_2 = esi_7[0x1f6]
        void* var_38_2 = edi_7
        memcpy()
        *(edi_7 + 0xcf4) = esi_7[0x1fc]
        j_29 = esi_7[0x1fc] << 2
        int32_t var_34_3 = esi_7[0x1fa]
        void* var_38_3 = edi_7 + 0x204
        memcpy()
        *(edi_7 + 0x17e8) = esi_7[0x200]
        j_29 = esi_7[0x200] << 2
        int32_t var_34_4 = esi_7[0x1fe]
        void* var_38_4 = edi_7 + 0xcf8
        memcpy()
        *(edi_7 + 0x17ec) = esi_7[0x202]
        *(edi_7 + 0x17f0) = esi_7[0x203]
        *(edi_7 + 0x1af4) = esi_7[0x206]
        bool cond:3_1 = esi_7[0x206] s<= 0
        j_16 = nullptr
        
        if (not(cond:3_1))
            void* ecx_14 = var_120c_1
            int32_t var_11fc_1 = 0
            int32_t** edi_9 = nullptr
            void* var_1204_2 = edi_7 + 0x17fc
            void* j_3
            
            do
                j_29 = *(edi_9 + esi_7[0x204])
                sub_63d8d0(ecx_14 + 0x6edc, j_29)
                j_29 = *(edi_9 + esi_7[0x204] + 8)
                sub_63d8d0(var_1204_2 - 4, j_29)
                edi_9 = &edi_9[6]
                *var_1204_2 = *(edi_9 + esi_7[0x204] - 8)
                var_1204_2 += 0xc
                j_3 = j_16 + 1
                ecx_14 = var_120c_1 + 0xc
                j_16 = j_3
                var_120c_1 = ecx_14
            while (j_3 s< esi_7[0x206])
            edi_7 = var_11f8_1
        
        int32_t var_11fc_2 = 0
        
        if (esi_7[0x1f4] s> 0)
            void* j_24 = edi_7 - 0xc
            int32_t j_4 = 0
            j_16 = j_24
            
            do
                int32_t* ecx_21 = &esi_7[0x1f2][j_4 * 2]
                j_29 = &ecx_21[1]
                sub_4bb260(j_24, ecx_21, j_29)
                j_24 = j_16
                j_4 += 1
            while (j_4 s< esi_7[0x1f4])
            
            edi_7 = var_11f8_1
        
        int32_t j_15 = 0
        
        if (esi_7[0x212] s> 0)
            void* ecx_23 = edi_7 + 0x1b18
            j_16 = 1
            int32_t j_5 = j_15
            void* var_120c_2 = ecx_23
            
            do
                j_29 = &j_16
                sub_4bb260(ecx_23, &esi_7[0x210][j_5], j_29)
                ecx_23 = var_120c_2
                j_5 += 1
            while (j_5 s< esi_7[0x212])
            
            edi_7 = var_11f8_1
        
        *(edi_7 + 0x1b30) = esi_7[0x213]
        int32_t var_11fc_3 = 0
        
        if (esi_7[0x216] s> 0)
            void* j_25 = edi_7 + 0x1b24
            int32_t j_6 = 0
            j_16 = j_25
            
            do
                int32_t* ecx_24 = &esi_7[0x214][j_6 * 2]
                j_29 = &ecx_24[1]
                sub_4bb260(j_25, ecx_24, j_29)
                j_25 = j_16
                j_6 += 1
            while (j_6 s< esi_7[0x216])
            
            edi_7 = var_11f8_1
        
        if (esi_7[0x1ae] s> 0)
            void* j_21 = nullptr
            int32_t j_7 = 0
            j_16 = nullptr
            
            do
                int32_t* edx_6 = esi_7[0x1ac] + j_21
                int32_t ecx_26 = edx_6[5]
                int32_t var_1230 = edx_6[4]
                int32_t var_1228_1 = edx_6[2]
                int32_t var_122c_1 = ecx_26
                int32_t ecx_27 = edx_6[3]
                j_29 = &var_1230
                int32_t var_1224_1 = ecx_27
                sub_4bb1d0(edi_7 - 0x144c, edx_6, j_29)
                j_7 += 1
                j_21 = j_16 + 0x18
                j_16 = j_21
            while (j_7 s< esi_7[0x1ae])
            
            edi_7 = var_11f8_1
        
        if (esi_7[0x1aa] s> 0)
            void* edx_7 = edi_7 - 0x1458
            void* j_22 = nullptr
            void* var_120c_4 = edx_7
            int32_t j_8 = 0
            j_16 = nullptr
            
            do
                int32_t* ecx_30 = j_22 + esi_7[0x1a8]
                j_29 = &ecx_30[2]
                sub_4bb130(edx_7, ecx_30, j_29)
                j_8 += 1
                edx_7 = var_120c_4
                j_22 = j_16 + 0x10
                j_16 = j_22
            while (j_8 s< esi_7[0x1aa])
            
            edi_7 = var_11f8_1
        
        bool cond:7_1 = *(edi_7 - 0x1444) != 0
        int32_t ecx_33 = esi_7[0x1b1]
        *(edi_7 - 0x1440) = esi_7[0x1b0]
        *(edi_7 - 0x143c) = ecx_33
        *(edi_7 + 0x1af8) = *(esi_7 + 0x85c)
        *(edi_7 + 0x1b08) = esi_7[0x21b]
        *(edi_7 + 0x1b0c) = *(esi_7 + 0x870)
        *(edi_7 + 0x1b14) = esi_7[0x21e]
        
        if (not(cond:7_1))
            void* j_9 = &j_29
            j_29 = nullptr
            int32_t var_2c_1 = 1
            var_28 = 2
            int128_t var_44
            __builtin_memcpy(&var_44, 
                "\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00", 
                0x14)
            int32_t** j_11 = &j_29
            
            do
                void* j_18 = *j_9
                int128_t* k = &var_44
                j_16 = j_18
                
                do
                    int32_t ecx_34 = *k
                    int32_t eax_76
                    
                    if (j_18 == 0)
                        eax_76 = esi_7[ecx_34 + 0x1de]
                    else if (j_18 == 1)
                        eax_76 = esi_7[ecx_34 + 0x1e3]
                    else
                        eax_75 = j_18 - 2
                        
                        if (j_18 != 2)
                            j_29 = "StatsGetLocalValue"
                            int32_t var_34_13 = 0x3f0
                            ecx_44 = "Halt"
                            goto label_4d8a53
                        
                        eax_76 = esi_7[ecx_34 + 0x1e8]
                    
                    if (eax_76 != 0)
                        int32_t eax_77
                        int32_t* j_30
                        j_30:eax_77 = sx.q(eax_76)
                        j_29 = j_30
                        void* j_19 = j_16
                        sub_4bac10(j_19, j_19 + (ecx_34 << 2) + ecx_34 + 0x3e9, eax_29, eax_77)
                    
                    k += 4
                    j_18 = j_16
                while (k != &j_29)
                
                j_9 = &j_11[1]
                j_11 = j_9
            while (j_9 != &var_24)
            
            int32_t eax_79 = esi_7[0x20a]
            int32_t edi_10 = 0
            void* j_23 = esi_7[0x208]
            j_16 = j_23
            
            if (eax_79 s> 0)
                do
                    int32_t ecx_37 = *(j_23 + (edi_10 << 3))
                    int32_t eax_81
                    char edx_10
                    edx_10:eax_81 = sx.q(ecx_37)
                    int32_t eax_88
                    int32_t** j_26
                    
                    switch (*(j_16 + (edi_10 << 3) + 4))
                        case 3, 0x23
                            eax_88 = 0x18e70
                            j_26 = nullptr
                        case 0x1e
                            eax_88 = 0x18a88
                            j_26 = nullptr
                        case 0x24
                            eax_88 = 0x19258
                            j_26 = nullptr
                        case 0x25
                            eax_88 = 0x19640
                            j_26 = nullptr
                        case 0x26
                            eax_88 = 0x19a28
                            j_26 = nullptr
                        case 0x2d
                            eax_88 = 0x1a1f8
                            j_26 = nullptr
                        default
                            int64_t var_1210_1 = 0
                            j_26 = j_11
                            eax_88 = 0
                    
                    j_29 = j_26
                    sub_4bac10(eax_88, ecx_37 - ((eax_81 + zx.d(edx_10)) s>> 8) * 0x9c + 0xf4628, 
                        eax_29, eax_88)
                    j_23 = j_16
                    edi_10 += 1
                while (edi_10 s< eax_79)
                
                esi_7 = esi_3
            
            void* j_20 = esi_7[0x20e]
            void* edi_11 = esi_7[0x20c]
            j_16 = j_20
            
            if (j_20 s> 0)
                char* edi_12 = edi_11 + 4
                void* j_10
                
                do
                    int32_t edx_13 = *(edi_12 + 4)
                    j_23.b = *edi_12
                    int32_t esi_9 = *(edi_12 - 4)
                    j_29 = nullptr
                    int32_t eax_90
                    int32_t* j_31
                    j_31:eax_90 = sx.q(sub_4c38b0(j_20, edx_13, j_23.b, j_29.b))
                    j_29 = j_31
                    j_20, j_23 = sub_4bac10(eax_90, esi_9 + 0x10c8e0, eax_29, eax_90)
                    edi_12 = &edi_12[0x14]
                    j_10 = j_16
                    j_16 -= 1
                while (j_10 != 1)
            
            edi_7 = var_11f8_1
        
        edi_1 = edi_7 + 0x7868
        esi_1 = var_1220
        i = i_1 + 1
        edx_1 = var_121c_1 + 0x880
        i_1 = i
        var_121c_1 = edx_1
        var_11f8_1 = edi_1
    while (i s< esi_1[2])

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(i)
return i
