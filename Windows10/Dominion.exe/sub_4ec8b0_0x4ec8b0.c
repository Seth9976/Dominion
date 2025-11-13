// 函数: sub_4ec8b0
// 地址: 0x4ec8b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
void* edx
ecx, edx = __chkstk(0x6594)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* ebx = ecx
int128_t var_658c = data_8920d0
int32_t* count_1 = arg1 * 0x84
int32_t eax_3 = 0
int32_t ecx_1 = *(ebx + 0xd38)
void* var_6548 = ebx
int32_t var_6598 = 0x3ec
int32_t var_6594 = 0x452
int32_t var_6590 = 0x454
int32_t var_657c = 0x45a
int32_t var_6578 = 0x45d
int32_t var_6574 = 0x451
int32_t var_6560 = 0
int32_t edi
int32_t var_10 = edi
int128_t var_6570 = data_892100
int32_t var_134[0x6]
int32_t var_11c[0x6]
int32_t var_104[0x6]
int32_t var_ec[0x6]
int32_t var_d4[0x6]
int32_t var_bc[0x6]
void var_a4
void var_8c
void var_74
void var_5c
void var_44
void var_2c
int32_t* count

if (ecx_1 s> 0)
    do
        *(&var_44 + (eax_3 << 2)) = 0
        *(&var_2c + (eax_3 << 2)) = 0
        *(&var_74 + (eax_3 << 2)) = 0
        *(&var_5c + (eax_3 << 2)) = 0
        
        if (eax_3 u>= 6)
            ___report_rangecheckfailure()
            noreturn
        
        *(&count + eax_3) = 0
        *(&var_8c + (eax_3 << 2)) = 0
        var_d4[eax_3] = 0
        var_bc[eax_3] = 0
        var_104[eax_3] = 0
        var_ec[eax_3] = 0
        var_134[eax_3] = 0
        var_11c[eax_3] = 0
        *(&var_a4 + (eax_3 << 2)) = 0
        eax_3 += 1
    while (eax_3 s< ecx_1)

count = 0x480
void var_1234
memset(&var_1234, 0, count)
int32_t i = 0
int32_t i_24 = 0

if (*(ebx + 0x19a4) s> 0)
    void* edx_1 = ebx + 0x152dc
    
    do
        int32_t ecx_2 = *(edx_1 - 0x10)
        
        if (ecx_2 != 0xffffffff)
            if (ecx_2 s>= 6)
                count = "HashState"
                sub_63b870(i, &data_801800, "(int)owner < MAX_PLAYERS_DOM", 
                    "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0x40f, count)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t eax_10 = *(edx_1 - 0x14)
            
            if (eax_10 s> 0xb03)
                if (eax_10 s> 0xc00)
                    if (eax_10 == 0xe00)
                        *(&var_74 + (ecx_2 << 2)) += *edx_1
                    else if (eax_10 == 0xe01)
                        if (*(ebx + *(edx_1 - 0xc) * 0x10 + 0x1524) == 0xe26)
                            *(&var_a4 + (ecx_2 << 2)) = *edx_1 - 1
                    else if (eax_10 == 0x1000)
                        *(&var_44 + (ecx_2 << 2)) += *edx_1
                else if (eax_10 == 0xc00)
                    *(&var_2c + (ecx_2 << 2)) += *edx_1
                else if (eax_10 - 0xb04 u<= 4)
                    switch (eax_10)
                        case 0xb04, 0xb05, 0xb06, 0xb07
                            goto label_4ecaca
                        case 0xb08
                            *(&count + ecx_2) = 1
            else if (eax_10 == 0xb03)
            label_4ecaca:
                int32_t eax_11 = *(edx_1 - 0xc)
                
                if (eax_11 != 0x3f1)
                    int32_t eax_13 = *(ebx + eax_11 * 0x10 + 0x1524)
                    
                    if (eax_10 != 0xb03)
                        if (eax_10 != 0xb04)
                            goto label_4ecaf0
                        
                        var_d4[ecx_2] = eax_13
                    else
                        var_bc[ecx_2] = eax_13
                    label_4ecaf0:
                        
                        if (eax_10 == 0xb05)
                            var_ec[ecx_2] = eax_13
                    
                    int32_t esi_5 = *(edx_1 - 0x14)
                    
                    if (esi_5 == 0xb06)
                        var_104[ecx_2] = eax_13
                    else if (esi_5 == 0xb07)
                        var_11c[ecx_2] = eax_13
                    else if (esi_5 == 0xb00)
                        var_134[ecx_2] = eax_13
            else if (eax_10 == 0x601)
                *(&var_8c + (ecx_2 << 2)) += *edx_1
            else if (eax_10 == 0xa00)
                *(&var_5c + (ecx_2 << 2)) += *edx_1
            else if (eax_10 == 0xb00)
                goto label_4ecaca
            
            i = i_24
        else
            int32_t edi_1 = *(edx_1 - 0x14)
            int32_t esi_1 = *(edx_1 - 0xc)
            int32_t eax_5
            void* ecx_3
            
            if (edi_1 != 0xc00)
                if (edi_1 == 0x400)
                    void var_1230
                    ecx_3 = &var_1230
                    eax_5 = esi_1 << 4
                    goto label_4eca41
                
                if (edi_1 != 0x1000)
                    goto label_4eca4d
                
                int32_t esi_3 = esi_1 * 2
                int32_t var_122c[0x1b]
                var_122c[esi_3 * 2] += *edx_1
                i = i_24
            else
                ecx_3 = &var_1234
                eax_5 = esi_1 << 4
            label_4eca41:
                void* ecx_4 = ecx_3 + eax_5
                *ecx_4 += *edx_1
                i = i_24
            label_4eca4d:
                
                if (edi_1 == 0x1200)
                    int32_t esi_2 = esi_1 * 2
                    var_1228
                    *(&var_1228 + (esi_2 << 3)) += *edx_1
                    i = i_24
        
        i += 1
        edx_1 += 0x20
        i_24 = i
    while (i s< *(ebx + 0x19a4))

void* esi_6 = 1
data_19e5d38 = arg1.b
int32_t i_35 = 0
int32_t i_32 = *(ebx + 0x1520)
void* var_653c = 1
int32_t i_33 = 0
void var_3fb0

if (i_32 s> 0)
    void* edx_2 = &var_3fb0
    void* ecx_5 = ebx + 0x1a68
    int32_t i_1
    
    do
        if (*(ecx_5 - 0x18) == 0x474)
            *(edx_2 - 4) = *ecx_5
            *edx_2 = *(ecx_5 - 0x1c)
            *(edx_2 + 4) = *(ecx_5 + 8)
            i_35 = i_33 + 1
            edx_2 += 0xc
            i_33 = i_35
        
        ecx_5 += 0x64
        i_1 = i_32
        i_32 -= 1
    while (i_1 != 1)

count = count_1
int32_t ecx_7 = i_35 * 0xc
int32_t eax_35 = ecx_7 s/ 0xc
void var_3fb4
sub_4f5b20(eax_35, &var_3fb4 + ecx_7, &var_3fb4, eax_35, count)
int32_t eax_36 = *(ebx + 0xd38)
int32_t var_6538 = 0
int32_t var_db4[0x320]

if (eax_36 s> 0)
    void* ecx_9 = ebx + 0x1756c
    void* var_654c_1 = ecx_9
    int32_t edi_6
    
    do
        int32_t edi_2 = 0
        void* esi_7 = ecx_9 - 0x2a4
        int32_t edx_6 = 0
        int32_t i_2 = 0x3e8
        int32_t var_6540_1 = 0
        int32_t i_20 = 0x3e8
        
        do
            int32_t j = *esi_7
            
            if (j != 0)
                do
                    int32_t ecx_10 = j * 0x64
                    var_db4[edi_2] = *(ecx_10 + ebx + 0x1a4c)
                    edi_2 += 1
                    int32_t eax_38 = edx_6 + 1
                    j = *(ecx_10 + ebx + 0x1aa4)
                    
                    if (i_20 != 0x3ea)
                        eax_38 = edx_6
                    
                    edx_6 = eax_38
                while (j != 0)
                
                i_2 = i_20
            
            i_2 += 1
            esi_7 += 4
            i_20 = i_2
        while (i_2 s< 0x473)
        
        void* esi_8 = var_653c
        char var_6540_2 = edx_6.b
        int32_t i_26 = i_33
        
        if (i_26 s> 0)
            int32_t eax_39 = var_6538
            void* ecx_11 = &var_3fb0
            int32_t i_3
            
            do
                if (*(ecx_11 + 4) == eax_39)
                    var_db4[edi_2] = *ecx_11
                    edi_2 += 1
                    eax_39 = var_6538
                
                ecx_11 += 0xc
                i_3 = i_26
                i_26 -= 1
            while (i_3 != 1)
        
        count = count_1
        int32_t eax_42 = edi_2 << 2 s>> 2
        sub_4f5990(eax_42, &var_db4[edi_2], &var_db4, eax_42, count)
        
        if (edi_2 s> 0)
            int32_t ebx_1 = 0
            
            do
                int32_t ecx_14 = var_db4[ebx_1]
                char edx_9 = (ecx_14 s>> 8).b
                ebx_1 += 1
                *(esi_8 + &data_19e5d38) = edx_9
                *(esi_8 + 0x19e5d39) = ecx_14.b
                *(esi_8 + 0x19e5d3a) = edx_9 + ecx_14.b
                *(esi_8 + 0x19e5d3b) = edx_9 ^ ecx_14.b
                esi_8 += 4
            while (ebx_1 s< edi_2)
            
            ebx = var_6548
        
        int32_t i_25 = i_33
        int32_t ecx_15 = 0
        int32_t var_655c_1 = 0
        
        if (i_25 s> 0)
            int32_t edx_10 = var_6538
            void* edi_3 = &var_3fb4
            int32_t i_34 = i_25
            int32_t i_4
            
            do
                if (*(edi_3 + 8) == edx_10)
                    int32_t eax_44 = *edi_3
                    
                    if (eax_44 != ecx_15)
                        *(esi_8 + &data_19e5d38) = 0xff
                        int32_t edx_11 = *(eax_44 * 0x64 + ebx + 0x1a4c)
                        char ecx_17 = (edx_11 s>> 8).b
                        *(esi_8 + 0x19e5d39) = ecx_17
                        int32_t eax_45
                        eax_45.b = ecx_17
                        *(esi_8 + 0x19e5d3a) = edx_11.b
                        eax_45.b += edx_11.b
                        *(esi_8 + 0x19e5d3b) = eax_45.b
                        edx_11.b ^= ecx_17
                        eax_44 = *edi_3
                        *(esi_8 + 0x19e5d3c) = edx_11.b
                        esi_8 += 5
                        var_655c_1 = eax_44
                    
                    int32_t ecx_18 = *(edi_3 + 4)
                    char edx_13 = (ecx_18 s>> 8).b
                    *(esi_8 + &data_19e5d38) = edx_13
                    eax_44.b = edx_13
                    eax_44.b += ecx_18.b
                    *(esi_8 + 0x19e5d39) = ecx_18.b
                    *(esi_8 + 0x19e5d3a) = eax_44.b
                    i_25 = i_34
                    ecx_15 = var_655c_1
                    *(esi_8 + 0x19e5d3b) = edx_13 ^ ecx_18.b
                    esi_8 += 4
                    edx_10 = var_6538
                
                edi_3 += 0xc
                i_4 = i_25
                i_25 -= 1
                i_34 = i_25
            while (i_4 != 1)
        
        *(esi_8 + &data_19e5d38) = 0xff
        int32_t edi_4 = 0
        int32_t i_27 = *(ebx + 0x19b8)
        void* esi_9 = esi_8 + 1
        
        if (i_27 s> 0)
            int32_t eax_46 = var_6538
            void* ecx_19 = ebx + 0x3b5b4
            int32_t i_5
            
            do
                if (*(ecx_19 - 0x34) == eax_46 && *ecx_19 == 3 && *(ecx_19 + 4) == 8)
                    var_db4[edi_4] = *(ecx_19 + 8)
                    edi_4 += 1
                    eax_46 = var_6538
                
                ecx_19 += 0xa8
                i_5 = i_27
                i_27 -= 1
            while (i_5 != 1)
        
        count = count_1
        int32_t eax_49 = edi_4 << 2 s>> 2
        sub_4f5990(eax_49, &var_db4[edi_4], &var_db4, eax_49, count)
        
        if (edi_4 s> 0)
            int32_t ebx_2 = 0
            
            do
                int32_t ecx_22 = var_db4[ebx_2]
                char edx_16 = (ecx_22 s>> 8).b
                ebx_2 += 1
                *(esi_9 + &data_19e5d38) = edx_16
                *(esi_9 + 0x19e5d39) = ecx_22.b
                *(esi_9 + 0x19e5d3a) = edx_16 + ecx_22.b
                *(esi_9 + 0x19e5d3b) = edx_16 ^ ecx_22.b
                esi_9 += 4
            while (ebx_2 s< edi_4)
            
            ebx = var_6548
        
        *(esi_9 + &data_19e5d38) = 0xff
        *(esi_9 + 0x19e5d39) = (*var_654c_1 s>> 8).b
        *(esi_9 + 0x19e5d3a) = *var_654c_1
        *(esi_9 + 0x19e5d3b) = *(var_654c_1 - 0x78)
        *(esi_9 + 0x19e5d3c) = *(var_654c_1 - 0x74)
        *(esi_9 + 0x19e5d3d) = *(var_654c_1 - 0x70)
        *(esi_9 + 0x19e5d3e) = *(var_654c_1 - 0x6c)
        int32_t edx_17 = var_bc[var_6538]
        *(esi_9 + 0x19e5d3f) = *(&var_2c + (var_6538 << 2))
        *(esi_9 + 0x19e5d40) = *(&var_44 + (var_6538 << 2))
        *(esi_9 + 0x19e5d41) = *(&var_5c + (var_6538 << 2))
        *(esi_9 + 0x19e5d42) = *(&var_74 + (var_6538 << 2))
        *(esi_9 + 0x19e5d43) = *(&count + var_6538)
        *(esi_9 + 0x19e5d44) = *(&var_8c + (var_6538 << 2))
        *(esi_9 + 0x19e5d45) = *(&var_a4 + (var_6538 << 2))
        void* esi_10 = esi_9 + 0xe
        
        if (edx_17 == 0)
            *(esi_10 + &data_19e5d38) = 0xff
        else
            char ecx_25 = (edx_17 s>> 8).b
            *(esi_10 + &data_19e5d38) = ecx_25
            *(esi_10 + 0x19e5d39) = edx_17.b
            *(esi_10 + 0x19e5d3a) = ecx_25 + edx_17.b
            esi_10 += 3
            *(esi_10 + &data_19e5d38) = ecx_25 ^ edx_17.b
        
        int32_t eax_53 = var_d4[var_6538]
        void* esi_11 = esi_10 + 1
        char var_653c_1 = eax_53.b
        
        if (eax_53 == 0)
            *(esi_11 + &data_19e5d38) = 0xff
        else
            char edx_19 = (eax_53 s>> 8).b
            *(esi_11 + &data_19e5d38) = edx_19
            *(esi_11 + 0x19e5d39) = eax_53.b
            eax_53.b = edx_19
            eax_53.b += var_653c_1
            *(esi_11 + 0x19e5d3a) = eax_53.b
            esi_11 += 3
            *(esi_11 + &data_19e5d38) = var_653c_1 ^ edx_19
        
        int32_t eax_55 = var_ec[var_6538]
        void* esi_12 = esi_11 + 1
        char var_653c_2 = eax_55.b
        
        if (eax_55 == 0)
            *(esi_12 + &data_19e5d38) = 0xff
        else
            char edx_21 = (eax_55 s>> 8).b
            *(esi_12 + &data_19e5d38) = edx_21
            *(esi_12 + 0x19e5d39) = eax_55.b
            eax_55.b = edx_21
            eax_55.b += var_653c_2
            *(esi_12 + 0x19e5d3a) = eax_55.b
            esi_12 += 3
            *(esi_12 + &data_19e5d38) = var_653c_2 ^ edx_21
        
        int32_t eax_57 = var_104[var_6538]
        void* esi_13 = esi_12 + 1
        char var_653c_3 = eax_57.b
        
        if (eax_57 == 0)
            *(esi_13 + &data_19e5d38) = 0xff
        else
            char edx_23 = (eax_57 s>> 8).b
            *(esi_13 + &data_19e5d38) = edx_23
            *(esi_13 + 0x19e5d39) = eax_57.b
            eax_57.b = edx_23
            eax_57.b += var_653c_3
            *(esi_13 + 0x19e5d3a) = eax_57.b
            esi_13 += 3
            *(esi_13 + &data_19e5d38) = var_653c_3 ^ edx_23
        
        int32_t eax_59 = var_11c[var_6538]
        void* esi_14 = esi_13 + 1
        char var_653c_4 = eax_59.b
        
        if (eax_59 == 0)
            *(esi_14 + &data_19e5d38) = 0xff
        else
            char edx_25 = (eax_59 s>> 8).b
            *(esi_14 + &data_19e5d38) = edx_25
            *(esi_14 + 0x19e5d39) = eax_59.b
            eax_59.b += edx_25
            *(esi_14 + 0x19e5d3a) = eax_59.b
            esi_14 += 3
            *(esi_14 + &data_19e5d38) = var_653c_4 ^ edx_25
        
        int32_t eax_61 = var_134[var_6538]
        void* esi_15 = esi_14 + 1
        char var_653c_5 = eax_61.b
        
        if (eax_61 == 0)
            *(esi_15 + &data_19e5d38) = 0xff
        else
            char edx_27 = (eax_61 s>> 8).b
            *(esi_15 + &data_19e5d38) = edx_27
            *(esi_15 + 0x19e5d39) = eax_61.b
            eax_61.b += edx_27
            *(esi_15 + 0x19e5d3a) = eax_61.b
            esi_15 += 3
            *(esi_15 + &data_19e5d38) = var_653c_5 ^ edx_27
        
        edi_6 = var_6538 + 1
        *(esi_15 + 0x19e5d39) = var_6540_2
        ecx_9 = var_654c_1 + 0x5a30
        eax_36 = *(ebx + 0xd38)
        esi_6 = esi_15 + 2
        var_653c = esi_6
        var_6538 = edi_6
        var_654c_1 = ecx_9
    while (edi_6 s< eax_36)

int32_t var_653c_6 = 0

if (eax_36 s> 0)
    void* ecx_27 = ebx + 0x18e78
    int32_t var_654c_2 = 0
    void* var_6538_1 = ecx_27
    int32_t edx_43
    
    do
        int32_t i_28 = *(ecx_27 - 0x194c)
        int32_t edi_7 = 0
        
        if (i_28 s> 0)
            int32_t i_6
            
            do
                int32_t eax_64 = *ecx_27 * 0x64
                ecx_27 += 4
                var_db4[edi_7] = *(eax_64 + ebx + 0x1a4c)
                edi_7 += 1
                i_6 = i_28
                i_28 -= 1
            while (i_6 != 1)
        
        count = count_1
        int32_t eax_67 = edi_7 << 2 s>> 2
        sub_4f5990(eax_67, &var_db4[edi_7], &var_db4, eax_67, count)
        
        if (edi_7 s> 0)
            int32_t ebx_3 = 0
            
            do
                int32_t ecx_30 = var_db4[ebx_3]
                char edx_30 = (ecx_30 s>> 8).b
                *(esi_6 + &data_19e5d38) = edx_30
                *(esi_6 + 0x19e5d39) = ecx_30.b
                *(esi_6 + 0x19e5d3a) = ecx_30.b + edx_30
                ebx_3 += 1
                *(esi_6 + 0x19e5d3b) = edx_30 ^ ecx_30.b
                esi_6 += 4
            while (ebx_3 s< edi_7)
            
            ebx = var_6548
        
        int32_t edi_8 = 0
        *(esi_6 + &data_19e5d38) = 0xff
        void* esi_16 = esi_6 + 1
        int32_t i_29 = *(var_6538_1 - 0x1974)
        
        if (i_29 s> 0)
            void* ecx_31 = var_6538_1 - 0x1900
            int32_t i_7
            
            do
                int32_t eax_70 = *ecx_31 * 0x64
                ecx_31 += 4
                var_db4[edi_8] = *(eax_70 + ebx + 0x1a4c)
                edi_8 += 1
                i_7 = i_29
                i_29 -= 1
            while (i_7 != 1)
        
        count = count_1
        int32_t eax_73 = edi_8 << 2 s>> 2
        sub_4f5990(eax_73, &var_db4[edi_8], &var_db4, eax_73, count)
        
        if (edi_8 s> 0)
            int32_t ebx_4 = 0
            
            do
                int32_t edx_32 = var_db4[ebx_4]
                char ecx_35 = (edx_32 s>> 8).b
                *(esi_16 + &data_19e5d38) = ecx_35
                char eax_74 = edx_32.b + ecx_35
                *(esi_16 + 0x19e5d39) = edx_32.b
                ebx_4 += 1
                edx_32.b ^= ecx_35
                *(esi_16 + 0x19e5d3a) = eax_74
                *(esi_16 + 0x19e5d3b) = edx_32.b
                esi_16 += 4
            while (ebx_4 s< edi_8)
            
            ebx = var_6548
        
        int32_t edi_9 = 0
        *(esi_16 + &data_19e5d38) = 0xff
        void* esi_17 = esi_16 + 1
        int32_t i_30 = *(var_6538_1 - 0x1928)
        
        if (i_30 s> 0)
            void* ecx_36 = var_6538_1 + 0x2580
            int32_t i_8
            
            do
                int32_t eax_76 = *ecx_36 * 0x64
                ecx_36 += 4
                var_db4[edi_9] = *(eax_76 + ebx + 0x1a4c)
                edi_9 += 1
                i_8 = i_30
                i_30 -= 1
            while (i_8 != 1)
        
        count = count_1
        int32_t eax_79 = edi_9 << 2 s>> 2
        sub_4f5990(eax_79, &var_db4[edi_9], &var_db4, eax_79, count)
        
        if (edi_9 s> 0)
            int32_t ebx_5 = 0
            
            do
                int32_t ecx_39 = var_db4[ebx_5]
                char edx_35 = (ecx_39 s>> 8).b
                *(esi_17 + &data_19e5d38) = edx_35
                *(esi_17 + 0x19e5d39) = ecx_39.b
                *(esi_17 + 0x19e5d3a) = ecx_39.b + edx_35
                ebx_5 += 1
                *(esi_17 + 0x19e5d3b) = edx_35 ^ ecx_39.b
                esi_17 += 4
            while (ebx_5 s< edi_9)
            
            ebx = var_6548
        
        *(esi_17 + &data_19e5d38) = 0xff
        void* edx_37 = *(var_6538_1 - 0x1ba4) * 0x64 + ebx
        
        if ((*(edx_37 + (arg1 << 2) + 0x1a84) & 4) == 0)
            *(esi_17 + 0x19e5d39) = 0xff
            esi_6 = esi_17 + 2
        else
            int32_t edx_38 = *(edx_37 + 0x1a4c)
            char ecx_41 = (edx_38 s>> 8).b
            int32_t eax_82
            eax_82.b = edx_38.b
            *(esi_17 + 0x19e5d39) = ecx_41
            eax_82.b += ecx_41
            *(esi_17 + 0x19e5d3a) = edx_38.b
            *(esi_17 + 0x19e5d3b) = eax_82.b
            *(esi_17 + 0x19e5d3c) = ecx_41 ^ edx_38.b
            *(esi_17 + 0x19e5d3d) = 0xff
            esi_6 = esi_17 + 6
        
        int32_t* eax_83 = &var_6598
        int32_t* var_6540_3 = &var_6598
        
        while (count_1[0x5ddd92] s<= 0)
            int32_t edi_10 = 0
            void* ecx_44
            
            for (int32_t i_9 = *(ebx + ((*eax_83 + var_654c_2) << 2) + 0x16328); i_9 != 0; 
                    i_9 = *(ecx_44 + 0x1aa4))
                ecx_44 = i_9 * 0x64 + ebx
                
                if ((*(ecx_44 + (arg1 << 2) + 0x1a84) & 2) != 0)
                    var_db4[edi_10] = *(ecx_44 + 0x1a4c)
                    edi_10 += 1
            
            count = count_1
            int32_t eax_89 = edi_10 << 2 s>> 2
            sub_4f5990(eax_89, &var_db4[edi_10], &var_db4, eax_89, count)
            
            if (edi_10 s> 0)
                int32_t ebx_6 = 0
                
                do
                    int32_t ecx_47 = var_db4[ebx_6]
                    char edx_41 = (ecx_47 s>> 8).b
                    ebx_6 += 1
                    *(esi_6 + &data_19e5d38) = edx_41
                    *(esi_6 + 0x19e5d39) = ecx_47.b
                    *(esi_6 + 0x19e5d3a) = edx_41 + ecx_47.b
                    *(esi_6 + 0x19e5d3b) = edx_41 ^ ecx_47.b
                    esi_6 += 4
                while (ebx_6 s< edi_10)
                
                ebx = var_6548
            
            eax_83 = &var_6540_3[1]
            *(esi_6 + &data_19e5d38) = 0xff
            esi_6 += 1
            var_6540_3 = eax_83
            
            if (*eax_83 == 0)
                break
        
        edx_43 = var_653c_6 + 1
        var_654c_2 += 0x168c
        ecx_27 = var_6538_1 + 0x5a30
        eax_36 = *(ebx + 0xd38)
        var_653c_6 = edx_43
        var_6538_1 = ecx_27
    while (edx_43 s< eax_36)

int32_t i_10 = 0
int32_t i_22 = 0

if (eax_36 s> 0)
    void* eax_92 = ebx + 0x172d0
    void* var_653c_7 = eax_92
    
    do
        if (i_10 == *(ebx + 0x19cc))
            int32_t j_1 = *eax_92
            int32_t edi_11 = 0
            void* ecx_50
            
            for (; j_1 != 0; j_1 = *(ecx_50 + 0x1aa4))
                ecx_50 = j_1 * 0x64 + ebx
                
                if ((*(ecx_50 + (arg1 << 2) + 0x1a84) & 2) != 0)
                    var_db4[edi_11] = *(ecx_50 + 0x1a4c)
                    edi_11 += 1
            
            count = count_1
            int32_t eax_96 = edi_11 << 2 s>> 2
            sub_4f5990(eax_96, &var_db4[edi_11], &var_db4, eax_96, count)
            count_1 = nullptr
            
            if (edi_11 s> 0)
                int32_t ebx_7 = 0
                
                do
                    int32_t edx_45 = var_db4[ebx_7]
                    char ecx_54 = (edx_45 s>> 8).b
                    ebx_7 += 1
                    *(esi_6 + &data_19e5d38) = ecx_54
                    *(esi_6 + 0x19e5d39) = edx_45.b
                    char eax_97 = ecx_54 + edx_45.b
                    edx_45.b ^= ecx_54
                    *(esi_6 + 0x19e5d3a) = eax_97
                    *(esi_6 + 0x19e5d3b) = edx_45.b
                    esi_6 += 4
                while (ebx_7 s< edi_11)
                
                ebx = var_6548
            
            i_10 = i_22
            eax_92 = var_653c_7
            *(esi_6 + &data_19e5d38) = 0xff
            esi_6 += 1
        
        i_10 += 1
        eax_92 += 0x5a30
        i_22 = i_10
        var_653c_7 = eax_92
    while (i_10 s< *(ebx + 0xd38))

int32_t i_23 = 0x1f
void var_11c0
void* edi_12 = &var_11c0
void* count_2 = ebx + 0x1594
void* ebx_8 = ebx + 0x1594
int32_t i_11

do
    int32_t edx_46 = *ebx_8
    ebx_8 += 0x10
    edi_12 += 0x10
    char ecx_56 = (edx_46 s>> 8).b
    *(esi_6 + &data_19e5d38) = ecx_56
    void* eax_98
    eax_98.b = ecx_56
    *(esi_6 + 0x19e5d39) = edx_46.b
    eax_98.b += edx_46.b
    *(esi_6 + 0x19e5d3a) = eax_98.b
    edx_46.b ^= ecx_56
    eax_98.b = *(edi_12 - 0x14)
    *(esi_6 + 0x19e5d3b) = edx_46.b
    *(esi_6 + 0x19e5d3c) = eax_98.b
    eax_98.b = *(edi_12 - 0x10)
    *(esi_6 + 0x19e5d3d) = eax_98.b
    eax_98.b = *(edi_12 - 0xc)
    *(esi_6 + 0x19e5d3e) = eax_98.b
    eax_98.b = *(edi_12 - 8)
    *(esi_6 + 0x19e5d3f) = eax_98.b
    esi_6 += 8
    i_11 = i_23
    i_23 -= 1
while (i_11 != 1)
void* ebx_9 = var_6548
int32_t edi_13 = 0
*(esi_6 + &data_19e5d38) = 0xff
void* esi_18 = esi_6 + 1
int32_t ecx_57

for (int32_t i_12 = *(ebx_9 + 0x154c); i_12 != 0; i_12 = *(ecx_57 + ebx_9 + 0x1aa4))
    ecx_57 = i_12 * 0x64
    var_db4[edi_13] = *(ecx_57 + ebx_9 + 0x1a4c)
    edi_13 += 1

count = count_2
int32_t eax_101 = edi_13 << 2 s>> 2
sub_4f5990(eax_101, &var_db4[edi_13], &var_db4, eax_101, count)

if (edi_13 s> 0)
    int32_t ebx_10 = 0
    
    do
        int32_t ecx_60 = var_db4[ebx_10]
        char edx_49 = (ecx_60 s>> 8).b
        ebx_10 += 1
        *(esi_18 + &data_19e5d38) = edx_49
        *(esi_18 + 0x19e5d39) = ecx_60.b
        *(esi_18 + 0x19e5d3a) = edx_49 + ecx_60.b
        *(esi_18 + 0x19e5d3b) = edx_49 ^ ecx_60.b
        esi_18 += 4
    while (ebx_10 s< edi_13)
    
    ebx_9 = var_6548

*(esi_18 + &data_19e5d38) = 0xff
void* edi_14 = esi_18 + 0x10
*(esi_18 + 0x19e5d39) = *(ebx_9 + 0x19c4)
void* edx_50 = edx
*(esi_18 + 0x19e5d3a) = *(ebx_9 + 0x19cc)
*(esi_18 + 0x19e5d3b) = *(ebx_9 + 0x19d0)
*(esi_18 + 0x19e5d3c) = *(ebx_9 + 0x19dc)
*(esi_18 + 0x19e5d3d) = *(ebx_9 + 0x19e0)
*(esi_18 + 0x19e5d3e) = *(ebx_9 + 0x19e4)
*(esi_18 + 0x19e5d3f) = *(ebx_9 + 0x19b4)
*(esi_18 + 0x19e5d40) = *(edx_50 + 4)
*(esi_18 + 0x19e5d41) = *(edx_50 + 0x4c)
*(esi_18 + 0x19e5d42) = *(edx_50 + 0x50)
*(esi_18 + 0x19e5d43) = *(edx_50 + 0x40)
*(esi_18 + 0x19e5d44) = *(edx_50 + 0x44)
*(esi_18 + 0x19e5d45) = *(edx_50 + 0x6c)
*(esi_18 + 0x19e5d46) = *(edx_50 + 0x60)
*(esi_18 + 0x19e5d47) = *(edx_50 + 0x5c)
void* var_6538_2 = edi_14

if (*(edx_50 + 0x54) == 2)
    int32_t edx_51 = *(*(edx_50 + 0x58) * 0x64 + ebx_9 + 0x1a4c)
    char ecx_62 = (edx_51 s>> 8).b
    *(edi_14 + &data_19e5d38) = ecx_62
    int32_t eax_103
    eax_103.b = ecx_62
    *(edi_14 + 0x19e5d39) = edx_51.b
    eax_103.b += edx_51.b
    *(edi_14 + 0x19e5d3a) = eax_103.b
    edx_50 = edx
    *(edi_14 + 0x19e5d3b) = ecx_62 ^ edx_51.b
    edi_14 += 4
    var_6538_2 = edi_14

void* eax_109 = *(edx_50 + 4)

if (eax_109 == 1 || eax_109 == 2 || eax_109 == 3)
    int32_t i_31 = *(edx_50 + 0x6c)
    int32_t esi_19 = 0
    
    if (i_31 s> 0)
        void* ecx_63 = edx + 0x70
        int32_t i_13
        
        do
            if (*(edx + 0x40) != 2 || *(*ecx_63 * 0x64 + ebx_9 + 0x1a50) == 0x3ea)
                var_db4[esi_19] = *(*ecx_63 * 0x64 + ebx_9 + 0x1a4c)
                esi_19 += 1
            
            ecx_63 += 4
            i_13 = i_31
            i_31 -= 1
        while (i_13 != 1)
        edi_14 = var_6538_2
    
    count = count_2
    int32_t eax_108 = esi_19 << 2 s>> 2
    eax_109 = sub_4f5990(eax_108, &var_db4[esi_19], &var_db4, eax_108, count)
    
    if (esi_19 s> 0)
        int32_t ebx_11 = 0
        
        do
            int32_t ecx_66 = var_db4[ebx_11]
            char edx_54 = (ecx_66 s>> 8).b
            ebx_11 += 1
            *(edi_14 + &data_19e5d38) = edx_54
            eax_109.b = edx_54
            *(edi_14 + 0x19e5d39) = ecx_66.b
            eax_109.b += ecx_66.b
            *(edi_14 + 0x19e5d3a) = eax_109.b
            *(edi_14 + 0x19e5d3b) = edx_54 ^ ecx_66.b
            edi_14 += 4
        while (ebx_11 s< esi_19)
        
        ebx_9 = var_6548
        var_6538_2 = edi_14
    
    edx_50 = edx

if (*(edx_50 + 4) == 3)
    int32_t i_14 = 0
    
    if (*(edx + 0xd10) s> 0)
        void* ecx_67 = edx + 0xcf0
        
        do
            int32_t eax_110 = *ecx_67
            ecx_67 += 4
            i_14 += 1
            *(edi_14 + &data_19e5d38) = (eax_110 s>> 8).b
            eax_109.b = *(ecx_67 - 4)
            *(edi_14 + 0x19e5d39) = eax_109.b
            edi_14 += 2
        while (i_14 s< *(edx + 0xd10))
        
        var_6538_2 = edi_14
    
    edx_50 = edx

if (*(edx_50 + 4) == 4)
    int32_t i_15 = 0
    
    if (*(edx_50 + 0x6c) s> 0)
        void* edx_55 = edx_50 + 0x70
        
        do
            eax_109.b = *edx_55
            edx_55 += 4
            *(edi_14 + &data_19e5d38) = eax_109.b
            i_15 += 1
            edi_14 += 1
        while (i_15 s< *(edx + 0x6c))
        
        var_6538_2 = edi_14
        edx_50 = edx

if (*(edx_50 + 4) == 6)
    int32_t i_16 = 0
    int32_t i_21 = 0
    void var_6530
    
    if (*(edx_50 + 0x6c) s> 0)
        void* edi_16 = &var_6530
        
        do
            count = *(edx_50 + (i_16 << 2) + 0x70)
            uint32_t eax_111 = sub_5915b0(eax_109, edx_50, ebx_9, count)
            edx_50 = edx
            edi_16 += 0xc
            *(edi_16 - 0x10) = eax_111
            int32_t ecx_69 = *(edx_50 + (i_16 << 2) + 0x70)
            i_16 += 1
            *(edi_16 - 8) = ecx_69
            eax_109 = *((ecx_69 u>> 6 & 0xfff) * 0x64 + ebx_9 + 0x1a4c)
            *(edi_16 - 0xc) = eax_109
        while (i_16 s< *(edx_50 + 0x6c))
        
        edi_14 = var_6538_2
        i_21 = i_16
    
    count = count_2
    int32_t ecx_71 = i_16 * 0xc
    int32_t eax_119 = ecx_71 s/ 0xc
    void var_6534
    sub_4f5b20(eax_119, &var_6534 + ecx_71, &var_6534, eax_119, count)
    
    if (i_16 s> 0)
        void* eax_120 = &var_6530
        void* var_6558 = &var_6530
        int32_t i_17
        
        do
            int32_t ecx_73 = *(eax_120 - 4)
            char edx_60 = (ecx_73 s>> 8).b
            *(edi_14 + &data_19e5d38) = edx_60
            eax_120.b = edx_60
            *(edi_14 + 0x19e5d39) = ecx_73.b
            eax_120.b += ecx_73.b
            *(edi_14 + 0x19e5d3a) = eax_120.b
            *(edi_14 + 0x19e5d3b) = edx_60 ^ ecx_73.b
            int32_t ecx_75 = *var_6558
            char edx_62 = (ecx_75 s>> 8).b
            *(edi_14 + 0x19e5d3c) = edx_62
            eax_120.b = edx_62
            eax_120.b += ecx_75.b
            *(edi_14 + 0x19e5d3d) = ecx_75.b
            *(edi_14 + 0x19e5d3e) = eax_120.b
            *(edi_14 + 0x19e5d3f) = edx_62 ^ ecx_75.b
            void* edi_17 = edi_14 + 8
            void* count_3 = *(var_6558 + 4)
            int32_t var_1a34[0x200]
            count = &var_1a34
            uint32_t eax_123
            int32_t edx_64
            eax_123, edx_64 = sub_57ee90(edx, *(edx + 0x4c), ebx_9, count_3, count)
            uint32_t esi_22
            int32_t ecx_77
            
            if (eax_123 s<= 0)
                count = count_3
                
                if (sub_5915b0(eax_123, edx_64, ebx_9, count) != 0x1121)
                    esi_22 = eax_123
                else
                    count = count_3
                    uint32_t eax_125 = sub_5916b0(count)
                    count = &var_1a34
                    esi_22 = sub_590930(eax_125, eax_125, ebx_9, count)
                    ecx_77 = 0
                    
                    if (esi_22 s> 0)
                        goto label_4edbca
            else
                ecx_77 = 0
                esi_22 = eax_123
            label_4edbca:
                
                do
                    var_db4[ecx_77] = *(var_1a34[ecx_77] * 0x64 + ebx_9 + 0x1a4c)
                    ecx_77 += 1
                while (ecx_77 s< esi_22)
            count = count_2
            int32_t eax_130 = esi_22 << 2 s>> 2
            sub_4f5990(eax_130, &var_db4[esi_22], &var_db4, eax_130, count)
            count_2 = nullptr
            
            if (esi_22 s> 0)
                int32_t ebx_12 = 0
                
                do
                    int32_t ecx_83 = var_db4[ebx_12]
                    char edx_68 = (ecx_83 s>> 8).b
                    ebx_12 += 1
                    *(edi_17 + &data_19e5d38) = edx_68
                    *(edi_17 + 0x19e5d39) = ecx_83.b
                    *(edi_17 + 0x19e5d3a) = edx_68 + ecx_83.b
                    *(edi_17 + 0x19e5d3b) = edx_68 ^ ecx_83.b
                    edi_17 += 4
                while (ebx_12 s< esi_22)
                
                ebx_9 = var_6548
            
            *(edi_17 + &data_19e5d38) = 0xff
            eax_120 = var_6558 + 0xc
            edi_14 = edi_17 + 1
            var_6558 = eax_120
            i_17 = i_21
            i_21 -= 1
        while (i_17 != 1)
        var_6538_2 = edi_14
    
    edx_50 = edx

int32_t eax_133 = *(edx_50 + 4)

if (eax_133 == 7 || eax_133 == 8)
    int32_t i_18 = 0
    int32_t esi_23 = 0
    
    if (*(edx + 0x6c) s> 0)
        void* ebx_13 = edx + 0x70
        
        do
            int32_t eax_135 = 0
            
            if (esi_23 s> 0)
                while (var_db4[eax_135] != *(edx + 0x70 + (i_18 << 2)))
                    eax_135 += 1
                    
                    if (eax_135 s>= esi_23)
                        goto label_4edcc6
            
            if (esi_23 s<= 0 || eax_135 s>= esi_23)
            label_4edcc6:
                var_db4[esi_23] = *ebx_13
                esi_23 += 1
            
            i_18 += 1
            ebx_13 += 4
        while (i_18 s< *(edx + 0x6c))
        
        edi_14 = var_6538_2
        ebx_9 = var_6548
    
    count = count_2
    int32_t eax_139 = esi_23 << 2 s>> 2
    sub_4f5990(eax_139, &var_db4[esi_23], &var_db4, eax_139, count)
    
    if (esi_23 s> 0)
        int32_t ebx_14 = 0
        
        do
            int32_t ecx_87 = var_db4[ebx_14]
            char edx_71 = (ecx_87 s>> 8).b
            ebx_14 += 1
            *(edi_14 + &data_19e5d38) = edx_71
            *(edi_14 + 0x19e5d39) = ecx_87.b
            *(edi_14 + 0x19e5d3a) = edx_71 + ecx_87.b
            *(edi_14 + 0x19e5d3b) = edx_71 ^ ecx_87.b
            edi_14 += 4
        while (ebx_14 s< esi_23)
        
        ebx_9 = var_6548
    
    edx_50 = edx

if (*(edx_50 + 4) == 0)
    int32_t eax_141 = arg2
    
    if (eax_141 != 0)
        char* i_19 = nullptr
        
        if (*(ebx_9 + 0xd38) s> 0)
            do
                eax_141.b = i_19[eax_141]
                i_19 = &i_19[1]
                *(edi_14 + &data_19e5d38) = eax_141.b
                edi_14 += 1
                eax_141 = arg2
            while (i_19 s< *(ebx_9 + 0xd38))

int64_t var_6554
count = &var_6554
var_6554 = 0
count.q = 0
sub_63a3b0(&count, edi_14, &data_19e5d38, &count, count)
int32_t* result = count
CookieCheckFunction(result)
return result
