// 函数: _Z23ButtonSourceCacheUpdateR17ButtonSourceCacheRK9InputData
// 地址: 0xc81700
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg2 - 1)

if (x8.d u> 0x17 || (0xff1dff u>> x8.d & 1) == 0 || x8.d u> 0x17)
    return 

int32_t x8_1 = 0xaa1155 u>> x8.d & 1

switch (x8)
    case 0, 1
        int32_t x9_3 = *(arg2 + 4)
        
        if (x9_3 s> 0x6e)
            uint64_t x10_5 = zx.q(x9_3 - 0xf700)
            
            if (x10_5.d u<= 3)
                switch (x10_5)
                    case 0
                        *(arg1 + 0xa) = x8_1.b
                        
                        if (x8_1 != 0)
                            *(arg1 + 0x2e) = x8_1.b
                    case 1
                        *(arg1 + 0xb) = x8_1.b
                        
                        if (x8_1 != 0)
                            *(arg1 + 0x2f) = x8_1.b
                    case 2
                        *(arg1 + 8) = x8_1.b
                        
                        if (x8_1 != 0)
                            *(arg1 + 0x2c) = x8_1.b
                    case 3
                        *(arg1 + 9) = x8_1.b
                        
                        if (x8_1 != 0)
                            *(arg1 + 0x2d) = x8_1.b
            else if (x9_3 == 0x6f)
                *(arg1 + 6) = x8_1.b
                
                if (x8_1 != 0)
                    *(arg1 + 0x2a) = x8_1.b
        else
            uint64_t x10_1 = zx.q(x9_3 - 0x3d)
            
            if (x10_1.d u<= 0x1c)
                switch (x10_1)
                    case 0
                        *(arg1 + 7) = x8_1.b
                        
                        if (x8_1 != 0)
                            *(arg1 + 0x2b) = x8_1.b
                    case 5
                        *(arg1 + 5) = x8_1.b
                        
                        if (x8_1 != 0)
                            *(arg1 + 0x29) = x8_1.b
                    case 0x19
                        if (*(arg2 + 8) == 2)
                            *(arg1 + 0xe) = x8_1.b
                            
                            if (x8_1 != 0)
                                *(arg1 + 0x32) = x8_1.b
                    case 0x1c
                        goto label_c81a80
            else if (x9_3 == 4)
            label_c81a80:
                *(arg1 + 0x2b) = x8_1.b
                
                if (x8_1 != 0)
                    *(arg1 + 0x4f) = x8_1.b
            else if (x9_3 == 0x20)
                *(arg1 + 4) = x8_1.b
                
                if (x8_1 != 0)
                    *(arg1 + 0x28) = x8_1.b
    case 2
        *arg1 = x8_1.b
        
        if (x8_1 != 0)
            *(arg1 + 0x24) = x8_1.b
    case 3
        *arg1 = x8_1.b
        
        if (x8_1 != 0)
            *(arg1 + 0x24) = x8_1.b
    case 6, 7
        *(arg1 + 1) = x8_1.b
        
        if (x8_1 != 0)
            *(arg1 + 0x25) = x8_1.b
    case 8
        if (*(arg2 + 0xc) s< 1)
            *(arg1 + 3) = x8_1.b
            
            if (x8_1 != 0)
                *(arg1 + 0x27) = x8_1.b
        else
            *(arg1 + 2) = x8_1.b
            
            if (x8_1 != 0)
                *(arg1 + 0x26) = x8_1.b
    case 0xa
        *(arg1 + 0x23) = x8_1.b
        
        if (x8_1 != 0)
            *(arg1 + 0x47) = x8_1.b
    case 0xb, 0xc
        int32_t x9_4 = *(arg2 + 4)
        
        if (x9_4 s<= 0x1ff)
            uint64_t x10_2 = zx.q(x9_4 - 4)
            
            if (x10_2.d u<= 0x1c)
                switch (x10_2)
                    case 0
                        *(arg1 + 0x15) = x8_1.b
                        
                        if (x8_1 != 0)
                            *(arg1 + 0x39) = x8_1.b
                    case 4
                        *(arg1 + 0x17) = x8_1.b
                        
                        if (x8_1 != 0)
                            *(arg1 + 0x3b) = x8_1.b
                    case 0xc
                        *(arg1 + 0x14) = x8_1.b
                        
                        if (x8_1 != 0)
                            *(arg1 + 0x38) = x8_1.b
                    case 0x1c
                        *(arg1 + 0x13) = x8_1.b
                        
                        if (x8_1 != 0)
                            *(arg1 + 0x37) = x8_1.b
            else if (x9_4 == 0x100)
                *(arg1 + 0x16) = x8_1.b
                
                if (x8_1 != 0)
                    *(arg1 + 0x3a) = x8_1.b
        else
            if (x9_4 == 0x200)
                *(arg1 + 0x18) = x8_1.b
                
                if (x8_1 != 0)
                    *(arg1 + 0x3c) = x8_1.b
            else if (x9_4 == 0x1000)
                *(arg1 + 0xf) = x8_1.b
                
                if (x8_1 != 0)
                    *(arg1 + 0x33) = x8_1.b
            
            if (x9_4 == 0x2000)
                *(arg1 + 0x10) = x8_1.b
                
                if (x8_1 != 0)
                    *(arg1 + 0x34) = x8_1.b
            else if (x9_4 == 0x4000)
                *(arg1 + 0x11) = x8_1.b
                
                if (x8_1 != 0)
                    *(arg1 + 0x35) = x8_1.b
            else if (x9_4 == 0x8000)
                *(arg1 + 0x12) = x8_1.b
                
                if (x8_1 != 0)
                    *(arg1 + 0x36) = x8_1.b
    case 0xd, 0xe
        uint64_t x10_3 = zx.q(ror.d(*(arg2 + 4) - 2, 1))
        
        if (x10_3.d u<= 7)
            int32_t x9_7 = *(arg2 + 0xc)
            
            switch (x10_3)
                case 0
                    void* __offset(ButtonSourceCache, 0x48) x9_8
                    
                    if (x9_7 == 0)
                        x9_8 = arg1 + 0x48
                    else
                        x9_8 = arg1 + 0x50
                    
                    *(x9_8 + 6) = x8_1.b
                case 1
                    void* __offset(ButtonSourceCache, 0x48) x9_14
                    
                    if (x9_7 == 0)
                        x9_14 = arg1 + 0x48
                    else
                        x9_14 = arg1 + 0x50
                    
                    *(x9_14 + 4) = x8_1.b
                case 3
                    void* __offset(ButtonSourceCache, 0x48) x9_15
                    
                    if (x9_7 == 0)
                        x9_15 = arg1 + 0x48
                    else
                        x9_15 = arg1 + 0x50
                    
                    *(x9_15 + 5) = x8_1.b
                case 7
                    void* __offset(ButtonSourceCache, 0x48) x9_16
                    
                    if (x9_7 == 0)
                        x9_16 = arg1 + 0x48
                    else
                        x9_16 = arg1 + 0x50
                    
                    *(x9_16 + 3) = x8_1.b
    case 0x10, 0x11
        int32_t x9_9 = *(arg2 + 4)
        
        if (x9_9 == 0x80000)
            *(arg1 + 0x1e) = x8_1.b
            
            if (x8_1 != 0)
                *(arg1 + 0x42) = x8_1.b
        else if (x9_9 == 0x200000)
            *(arg1 + 0x1a) = x8_1.b
            
            if (x8_1 != 0)
                *(arg1 + 0x3e) = x8_1.b
        else if (x9_9 == 0x100000)
            *(arg1 + 0x19) = x8_1.b
            
            if (x8_1 != 0)
                *(arg1 + 0x3d) = x8_1.b
        
        if (x9_9 == 0x10000)
            *(arg1 + 0x1b) = x8_1.b
            
            if (x8_1 != 0)
                *(arg1 + 0x3f) = x8_1.b
        else if (x9_9 == 0x20000)
            *(arg1 + 0x1c) = x8_1.b
            
            if (x8_1 != 0)
                *(arg1 + 0x40) = x8_1.b
        else if (x9_9 == 0x40000)
            *(arg1 + 0x1d) = x8_1.b
            
            if (x8_1 != 0)
                *(arg1 + 0x41) = x8_1.b
    case 0x12, 0x13
        int32_t x9_10 = *(arg2 + 4)
        
        if (x9_10 == 0x10)
            *(arg1 + 0x52) = x8_1.b
            return 
        
        if (x9_10 == 2)
            *(arg1 + 0x51) = x8_1.b
            return 
        
        if (x9_10 == 1)
            *(arg1 + 0x50) = x8_1.b
    case 0x14, 0x15
        int32_t x9_11 = *(arg2 + 4)
        
        if (x9_11 == 0x1000)
            *(arg1 + 0x4a) = x8_1.b
            return 
        
        if (x9_11 == 0x200)
            *(arg1 + 0x49) = x8_1.b
            return 
        
        if (x9_11 == 0x100)
            *(arg1 + 0x48) = x8_1.b
    case 0x16, 0x17
        int32_t x9_12 = *(arg2 + 4)
        
        if (x9_12 == 0x200000)
            *(arg1 + 0x21) = x8_1.b
            
            if (x8_1 != 0)
                *(arg1 + 0x45) = x8_1.b
        else if (x9_12 == 0x100000)
            *(arg1 + 0x20) = x8_1.b
            
            if (x8_1 != 0)
                *(arg1 + 0x44) = x8_1.b
        else if (x9_12 == 1)
            *(arg1 + 0x1f) = x8_1.b
            
            if (x8_1 != 0)
                *(arg1 + 0x43) = x8_1.b
