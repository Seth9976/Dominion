// 函数: _Z21CampaignButtonHitTestRK4Vec2
// 地址: 0xb97310
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*(gCampaignDlg + 0x5040))
uint64_t result

if (x0.d != 0)
    result = UI2HitTest(x0, arg1)

int64_t* entry_x8

if (x0.d == 0 || entry_x8[3].d == 0)
    uint64_t x0_1 = zx.q(*(gCampaignDlg + 0x5044))
    
    if (x0_1.d != 0)
        result = UI2HitTest(x0_1, arg1)
    
    if (x0_1.d == 0 || entry_x8[3].d == 0)
        uint64_t x0_2 = zx.q(*(gCampaignDlg + 0x5048))
        
        if (x0_2.d != 0)
            result = UI2HitTest(x0_2, arg1)
        
        if (x0_2.d == 0 || entry_x8[3].d == 0)
            uint64_t x0_3 = zx.q(*(gCampaignDlg + 0x504c))
            
            if (x0_3.d != 0)
                result = UI2HitTest(x0_3, arg1)
            
            if (x0_3.d == 0 || entry_x8[3].d == 0)
                uint64_t x0_4 = zx.q(*(gCampaignDlg + 0x5050))
                
                if (x0_4.d != 0)
                    result = UI2HitTest(x0_4, arg1)
                
                if (x0_4.d == 0 || entry_x8[3].d == 0)
                    uint64_t x0_5 = zx.q(*(gCampaignDlg + 0x5054))
                    
                    if (x0_5.d != 0)
                        result = UI2HitTest(x0_5, arg1)
                    
                    if (x0_5.d == 0 || entry_x8[3].d == 0)
                        uint64_t x0_6 = zx.q(*(gCampaignDlg + 0x5058))
                        
                        if (x0_6.d != 0)
                            result = UI2HitTest(x0_6, arg1)
                        
                        if (x0_6.d == 0 || entry_x8[3].d == 0)
                            uint64_t x0_7 = zx.q(*(gCampaignDlg + 0x505c))
                            
                            if (x0_7.d != 0)
                                result = UI2HitTest(x0_7, arg1)
                            
                            if (x0_7.d == 0 || entry_x8[3].d == 0)
                                uint64_t x0_8 = zx.q(*(gCampaignDlg + 0x5060))
                                
                                if (x0_8.d != 0)
                                    result = UI2HitTest(x0_8, arg1)
                                
                                if (x0_8.d == 0 || entry_x8[3].d == 0)
                                    result = zx.q(*(gCampaignDlg + 0x5064))
                                    
                                    if (result.d == 0)
                                    label_b9747c:
                                        entry_x8[3].d = 0
                                        *entry_x8 = _vtable_for_UI2HitResult + 0x10
                                        entry_x8[1] = 0
                                        return result
                                    
                                    result = UI2HitTest(result, arg1)
                                    
                                    if (entry_x8[3].d == 0)
                                        goto label_b9747c

return result
