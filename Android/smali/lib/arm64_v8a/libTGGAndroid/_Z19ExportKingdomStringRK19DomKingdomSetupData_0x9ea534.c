// 函数: _Z19ExportKingdomStringRK19DomKingdomSetupData
// 地址: 0x9ea534
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = XString::XString()
int32_t x8 = *arg1
XString* entry_x8

if (x8 != 0)
    if (x8 == 1)
        result = AddKingdomStrCard(arg1, entry_x8, zx.q(*(arg1 + 4)), nullptr, 0)
    
    int32_t x8_1 = *(arg1 + 0x10)
    int32_t x8_2
    
    if (x8_1 == 1)
        result = AddKingdomStrCard(arg1, entry_x8, zx.q(*(arg1 + 0x14)), nullptr, 0)
        x8_2 = *(arg1 + 0x20)
        
        if (x8_2 != 0)
        label_9ea5b4:
            
            if (x8_2 == 1)
                result = AddKingdomStrCard(arg1, entry_x8, zx.q(*(arg1 + 0x24)), nullptr, 0)
            
            int32_t x8_3 = *(arg1 + 0x30)
            
            if (x8_3 != 0)
                if (x8_3 == 1)
                    result = AddKingdomStrCard(arg1, entry_x8, zx.q(*(arg1 + 0x34)), nullptr, 0)
                
                int32_t x8_4 = *(arg1 + 0x40)
                
                if (x8_4 != 0)
                    if (x8_4 == 1)
                        result = AddKingdomStrCard(arg1, entry_x8, zx.q(*(arg1 + 0x44)), nullptr, 0)
                    
                    int32_t x8_5 = *(arg1 + 0x50)
                    
                    if (x8_5 != 0)
                        if (x8_5 == 1)
                            result =
                                AddKingdomStrCard(arg1, entry_x8, zx.q(*(arg1 + 0x54)), nullptr, 0)
                        
                        int32_t x8_6 = *(arg1 + 0x60)
                        
                        if (x8_6 != 0)
                            if (x8_6 == 1)
                                result = AddKingdomStrCard(arg1, entry_x8, zx.q(*(arg1 + 0x64)), 
                                    nullptr, 0)
                            
                            int32_t x8_7 = *(arg1 + 0x70)
                            
                            if (x8_7 != 0)
                                if (x8_7 == 1)
                                    result = AddKingdomStrCard(arg1, entry_x8, 
                                        zx.q(*(arg1 + 0x74)), nullptr, 0)
                                
                                int32_t x8_8 = *(arg1 + 0x80)
                                
                                if (x8_8 != 0)
                                    if (x8_8 == 1)
                                        result = AddKingdomStrCard(arg1, entry_x8, 
                                            zx.q(*(arg1 + 0x84)), nullptr, 0)
                                    
                                    if (*(arg1 + 0x90) == 1)
                                        result = AddKingdomStrCard(arg1, entry_x8, 
                                            zx.q(*(arg1 + 0x94)), nullptr, 0)
    else if (x8_1 != 0)
        x8_2 = *(arg1 + 0x20)
        
        if (x8_2 != 0)
            goto label_9ea5b4

int32_t x8_10 = *(arg1 + 0xa0)

if (x8_10 != 0)
    if (x8_10 == 1)
        result = AddKingdomStrCard(arg1, entry_x8, zx.q(*(arg1 + 0xa4)), arg1 + 0xb0, 0xe)
    
    int32_t x8_11 = *(arg1 + 0xe8)
    int32_t x8_12
    
    if (x8_11 == 1)
        result = AddKingdomStrCard(arg1, entry_x8, zx.q(*(arg1 + 0xec)), arg1 + 0xf8, 0xe)
        x8_12 = *(arg1 + 0x130)
        
        if (x8_12 != 0)
        label_9ea74c:
            
            if (x8_12 == 1)
                result = AddKingdomStrCard(arg1, entry_x8, zx.q(*(arg1 + 0x134)), arg1 + 0x140, 0xe)
            
            if (*(arg1 + 0x178) == 1)
                return AddKingdomStrCard(arg1, entry_x8, zx.q(*(arg1 + 0x17c)), arg1 + 0x188, 0xe)
                    __tailcall
    else if (x8_11 != 0)
        x8_12 = *(arg1 + 0x130)
        
        if (x8_12 != 0)
            goto label_9ea74c

return result
