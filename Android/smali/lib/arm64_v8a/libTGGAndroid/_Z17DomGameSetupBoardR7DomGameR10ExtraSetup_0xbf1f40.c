// 函数: _Z17DomGameSetupBoardR7DomGameR10ExtraSetup
// 地址: 0xbf1f40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*(arg1 + 0xd48))
int64_t x25
uint32_t x26

if (x0.d == 0)
    x26 = zx.d(*(arg1 + 0x1070))
    x25 = 0
else
    int128_t v0
    
    if ((zx.d(*(arg1 + 0xd4d)) & 1) != 0)
        x26 = zx.d(*(arg1 + 0x1070))
        x25 = 0
        
        if ((zx.d(*(arg1 + 0xd4c)) & 0x80) == 0)
        label_bf2138:
            void* x0_2
            x0_2, v0 = GetCampaign(x0)
            
            if (*(x0_2 + 0x1830) != 0)
                x26 = 1
    else
        void* x0_1
        x0_1, v0 = GetCampaign(x0)
        int32_t x8_2 = *(x0_1 + 0x1834)
        
        if (x8_2 != 0)
            *(arg1 + 0xe6c) = x8_2
        
        int32_t x8_3 = *(x0_1 + 0x1800)
        
        if (x8_3 != 0)
            *(arg1 + 0xd54) = x8_3
            int32_t x8_4 = *(x0_1 + 0x1804)
            
            if (x8_4 != 0)
                *(arg1 + 0xd58) = x8_4
                int32_t x8_5 = *(x0_1 + 0x1808)
                
                if (x8_5 != 0)
                    *(arg1 + 0xd5c) = x8_5
                    int32_t x8_6 = *(x0_1 + 0x180c)
                    
                    if (x8_6 != 0)
                        *(arg1 + 0xd60) = x8_6
                        int32_t x8_7 = *(x0_1 + 0x1810)
                        
                        if (x8_7 != 0)
                            *(arg1 + 0xd64) = x8_7
                            int32_t x8_8 = *(x0_1 + 0x1814)
                            
                            if (x8_8 != 0)
                                *(arg1 + 0xd68) = x8_8
                                int32_t x8_9 = *(x0_1 + 0x1818)
                                
                                if (x8_9 != 0)
                                    *(arg1 + 0xd6c) = x8_9
                                    int32_t x8_10 = *(x0_1 + 0x181c)
                                    
                                    if (x8_10 != 0)
                                        *(arg1 + 0xd70) = x8_10
                                        int32_t x8_11 = *(x0_1 + 0x1820)
                                        
                                        if (x8_11 != 0)
                                            *(arg1 + 0xd74) = x8_11
                                            int32_t x8_12 = *(x0_1 + 0x1824)
                                            
                                            if (x8_12 != 0)
                                                *(arg1 + 0xd78) = x8_12
        
        int32_t x8_13 = *(x0_1 + 0x1898)
        
        if (x8_13 != 0)
            *(arg1 + 0xd7c) = x8_13
            *(arg1 + 0xd80) = *(x0_1 + 0x18a8)
            
            if (x8_13 == 0x121c)
                data_71a830
                __builtin_memcpy(arg1 + 0xe84, 
                    "\x01\x12\x00\x00\x3c\x12\x00\x00\x07\x12\x00\x00\x0f\x12\x00\x00\x0d\x12\x00\x00\x"
                "06\x12\x00\x00\x05\x12\x00\x00\x02\x12\x00\x00\x0e\x12\x00\x00\x10\x12\x00\x
                        00", 
                    0x28)
            
            int32_t x8_14 = *(x0_1 + 0x189c)
            
            if (x8_14 != 0)
                *(arg1 + 0xdb8) = x8_14
                *(arg1 + 0xdbc) = *(x0_1 + 0x18ac)
                
                if (x8_14 == 0x121c)
                    data_71a830
                    __builtin_memcpy(arg1 + 0xe84, 
                        "\x01\x12\x00\x00\x3c\x12\x00\x00\x07\x12\x00\x00\x0f\x12\x00\x00\x0d\x12\x00\x"
                    "00\x06\x12\x00\x00\x05\x12\x00\x00\x02\x12\x00\x00\x0e\x12\x00\x00\x10\x12\x00"
                    "00", 
                        0x28)
                
                int32_t x8_15 = *(x0_1 + 0x18a0)
                
                if (x8_15 != 0)
                    *(arg1 + 0xdf4) = x8_15
                    *(arg1 + 0xdf8) = *(x0_1 + 0x18b0)
                    
                    if (x8_15 == 0x121c)
                        data_71a830
                        __builtin_memcpy(arg1 + 0xe84, 
                            "\x01\x12\x00\x00\x3c\x12\x00\x00\x07\x12\x00\x00\x0f\x12\x00\x00\x0d\x12\x"
                        "00\x00\x06\x12\x00\x00\x05\x12\x00\x00\x02\x12\x00\x00\x0e\x12\x00\x00\x10"
                        "12\x00\x00", 
                            0x28)
                    
                    int32_t x8_16 = *(x0_1 + 0x18a4)
                    
                    if (x8_16 != 0)
                        *(arg1 + 0xe30) = x8_16
                        *(arg1 + 0xe34) = *(x0_1 + 0x18b4)
                        
                        if (x8_16 == 0x121c)
                            data_71a830
                            __builtin_memcpy(arg1 + 0xe84, 
                                "\x01\x12\x00\x00\x3c\x12\x00\x00\x07\x12\x00\x00\x0f\x12\x00\x00\x0d\x"
                            "12\x00\x00\x06\x12\x00\x00\x05\x12\x00\x00\x02\x12\x00\x00\x0e\x12\x00"
                            "00\x10\x12\x00\x00", 
                                0x28)
        
        x25 = *(x0_1 + 0x1930)
        x0 = zx.q(*(arg1 + 0xd48))
        x26 = zx.d(*(arg1 + 0x1070))
        
        if (x0.d != 0 && (zx.d(*(arg1 + 0xd4c)) & 0x80) == 0)
            goto label_bf2138

data_71c630
int128_t var_b0
__builtin_memcpy(&var_b0, 
    "\x03\x01\x00\x00\x06\x01\x00\x00\x02\x01\x00\x00\x05\x01\x00\x00\x01\x01\x00\x00\x04\x01\x00\x00", 
    0x18)
int64_t var_98
int32_t x22
int32_t x23
int64_t x24

if (x26 == 0)
    x23 = 0x103
    x22 = 0x106
    x24 = 6
else
    x23 = 0x601
    x22 = 0x600
    x24 = 8
    var_98 = 0x10400000101
    var_b0 = var_b0

AddPileNoSetup(arg1, 7, zx.q(x23), arg2, 0, 0)
RunPileSetup(arg1, zx.q(x23), arg2, 0)
AddPileNoSetup(arg1, 8, zx.q(x22), arg2, 0, 0)
RunPileSetup(arg1, zx.q(x22), arg2, 0)
int64_t x23_1 = 2

do
    int32_t x22_1 = *(&var_b0 + (x23_1 << 2))
    AddPileNoSetup(arg1, zx.q(x23_1.d + 7), zx.q(x22_1), arg2, 0, 0)
    RunPileSetup(arg1, zx.q(x22_1), arg2, 0)
    x23_1 += 1
while (x24 != x23_1)

DomCardEnum* x3_4

for (int64_t i = 0; i != 0xa; i += 1)
    int32_t x22_2 = *(arg1 + (i << 2) + 0xd54)
    int32_t x0_12 = CalcKingdomInsertIdx(arg1, zx.q(x22_2))
    
    if (x0_12 s<= 0x21)
        int64_t fp_1 = 0x173c
        int64_t j = 0x22
        
        do
            if (*(arg1 + fp_1) != 0)
                ShiftPile(arg1, zx.q(j.d - 1), zx.q(j.d))
            
            j -= 1
            fp_1 -= 0x10
        while (j s> sx.q(x0_12))
    
    AddPileNoSetup(arg1, zx.q(x0_12), zx.q(x22_2), arg2, 0, 0)
    x3_4 = RunPileSetup(arg1, zx.q(x22_2), arg2, 0)

uint64_t x2_9 = zx.q(*(arg1 + 0xd7c))

if (x2_9.d != 0)
    if (*(arg1 + 0x174c) == 0)
        x3_4 = AddLandscapePile(arg1, 0x22, x2_9, x3_4, arg2)
    else if (*(arg1 + 0x175c) == 0)
        x3_4 = AddLandscapePile(arg1, 0x23, x2_9, x3_4, arg2)
    else if (*(arg1 + 0x176c) == 0)
        x3_4 = AddLandscapePile(arg1, 0x24, x2_9, x3_4, arg2)
    else if (*(arg1 + 0x177c) == 0)
        x3_4 = AddLandscapePile(arg1, 0x25, x2_9, x3_4, arg2)
    
    uint64_t x2_10 = zx.q(*(arg1 + 0xdb8))
    
    if (x2_10.d != 0)
        if (*(arg1 + 0x174c) == 0)
            x3_4 = AddLandscapePile(arg1, 0x22, x2_10, x3_4, arg2)
        else if (*(arg1 + 0x175c) == 0)
            x3_4 = AddLandscapePile(arg1, 0x23, x2_10, x3_4, arg2)
        else if (*(arg1 + 0x176c) == 0)
            x3_4 = AddLandscapePile(arg1, 0x24, x2_10, x3_4, arg2)
        else if (*(arg1 + 0x177c) == 0)
            x3_4 = AddLandscapePile(arg1, 0x25, x2_10, x3_4, arg2)
        
        uint64_t x2_11 = zx.q(*(arg1 + 0xdf4))
        
        if (x2_11.d != 0)
            if (*(arg1 + 0x174c) == 0)
                x3_4 = AddLandscapePile(arg1, 0x22, x2_11, x3_4, arg2)
            else if (*(arg1 + 0x175c) == 0)
                x3_4 = AddLandscapePile(arg1, 0x23, x2_11, x3_4, arg2)
            else if (*(arg1 + 0x176c) == 0)
                x3_4 = AddLandscapePile(arg1, 0x24, x2_11, x3_4, arg2)
            else if (*(arg1 + 0x177c) == 0)
                x3_4 = AddLandscapePile(arg1, 0x25, x2_11, x3_4, arg2)
            
            uint64_t x2_12 = zx.q(*(arg1 + 0xe30))
            
            if (x2_12.d != 0)
                if (*(arg1 + 0x174c) == 0)
                    AddLandscapePile(arg1, 0x22, x2_12, x3_4, arg2)
                else if (*(arg1 + 0x175c) == 0)
                    AddLandscapePile(arg1, 0x23, x2_12, x3_4, arg2)
                else if (*(arg1 + 0x176c) == 0)
                    AddLandscapePile(arg1, 0x24, x2_12, x3_4, arg2)
                else if (*(arg1 + 0x177c) == 0)
                    AddLandscapePile(arg1, 0x25, x2_12, x3_4, arg2)

int32_t x8_40
int64_t i_1

if (x26 == 0)
    var_98.d = 0x100
    
    if (zx.d(*arg2) == 0)
        x8_40 = 7
        
        if (zx.d(*(arg2 + 1)) != 0)
        label_bf2484:
            *(&var_b0 + (zx.q(x8_40) << 2)) = 0x923
            x8_40 += 1
            i_1 = 6
        else
            i_1 = 6
    else
        var_98:4.d = 0x500
        x8_40 = 8
        
        if (zx.d(*(arg2 + 1)) != 0)
            goto label_bf2484
        
        i_1 = 6
else
    int32_t var_90
    int32_t x8_39
    void* x9_5
    
    if (zx.d(*arg2) == 0)
        x8_39 = 8
        x9_5 = &var_90
        
        if (zx.d(*(arg2 + 1)) != 0)
            x8_40 = x8_39 | 2
            *x9_5 = 0x10000000923
        else
            x8_40 = x8_39 + 1
            *x9_5 = 0x100
    else
        var_90 = 0x500
        x8_39 = 9
        void var_8c
        x9_5 = &var_8c
        
        if (zx.d(*(arg2 + 1)) == 0)
            x8_40 = x8_39 + 1
            *x9_5 = 0x100
        else
            x8_40 = x8_39 | 2
            *x9_5 = 0x10000000923
    i_1 = 8

do
    int32_t x22_3 = *(&var_b0 + (i_1 << 2))
    AddPileNoSetup(arg1, zx.q(i_1.d + 7), zx.q(x22_3), arg2, 0, 0)
    RunPileSetup(arg1, zx.q(x22_3), arg2, 0)
    i_1 += 1
while (zx.q(x8_40) != i_1)

AddExtraPiles(arg1, arg2)
CampaignApplyExtras(arg1, 0xffffffff, arg1 + 0xd40, 4)
CampaignApplyExtras(arg1, 0xffffffff, arg1 + 0xd40, 8)
CampaignApplyExtras(arg1, 0xffffffff, arg1 + 0xd40, 0x10)
void* result
int64_t x4_5
result, x4_5 = CampaignLogMessagesForTraits(arg1)

if (*(arg1 + 0x1a60) s>= 1)
    int64_t x22_4 = 0x347
    int64_t i_2
    
    do
        __builtin_memset(&var_b0, 0, 0x50)
        DomPushSetupContext(arg1, 0, &var_b0, 0xffffffff, x4_5)
        (*(arg1 + (x22_4 << 3)))()
        result, x4_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
        *(result + 0x13000) -= 1
        i_2 = x22_4 - 0x346
        x22_4 += 1
    while (i_2 s< sx.q(*(arg1 + 0x1a60)))

*(arg1 + 0x1a60) = 0

if (x25 != 0)
    DomPushSetupContext(arg1, 0, arg2, 0xffffffff, x4_5)
    x25()
    result = __emutls_get_address(__emutls_v.gContextStack_tl)
    *(result + 0x13000) -= 1

return result
