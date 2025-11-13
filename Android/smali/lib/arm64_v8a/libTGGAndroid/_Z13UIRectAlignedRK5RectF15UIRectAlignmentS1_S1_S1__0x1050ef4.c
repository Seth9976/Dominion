// 函数: _Z13UIRectAlignedRK5RectF15UIRectAlignmentS1_S1_S1_
// 地址: 0x1050ef4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v18 = *arg4
float v4 = *(arg4 + 4)
float v20 = *arg3
float v5 = *(arg3 + 4)
float v2 = *(arg1 + 8)
float v3 = *(arg1 + 0xc)
float v0 = *arg1
float v1 = *(arg1 + 4)
float v21 = *(arg4 + 8)
float v6 = *(arg4 + 0xc)
float v22 = *(arg3 + 8)
float v7 = *(arg3 + 0xc)
float v23 = *arg5
float v16 = *(arg5 + 4)
int32_t x9 = *(arg2 + 8)
int32_t x8 = *arg2
float v24 = v18 - v20
float v19 = v2 - v0

if (x9 != 0)
    uint64_t x9_1 = zx.q(x9 - 1)
    
    if (x9_1.d u<= 4)
        float v25 = v21 - v22
        
        switch (x9_1)
            case 1
                v2 = v25 + v2
            case 2
                v2 = *(arg5 + 8) + v25 + v2
            case 3
                v25 = *(arg2 + 0x18)
                v2 = v2 + v18 + (v21 - v18) * v25 - (v20 + (v22 - v20) * v25)
            case 4
                v2 = v18 + (v21 - v18) * (v2 - v20) / (v22 - v20)
        
        if (x8 u<= 5)
            switch (x8)
                case 0
                    v0 = v2 - v19
                case 2
                    v0 = v24 + v0
                case 3
                    v0 = v23 + v24 + v0
                case 4
                    v19 = *(arg2 + 0x10)
                    v0 = v0 + v18 + (v21 - v18) * v19 - (v20 + (v22 - v20) * v19)
                case 5
                    v0 = v18 + (v21 - v18) * (v0 - v20) / (v22 - v20)
            
        label_10510b4:
            int32_t x9_3 = *(arg2 + 0xc)
            int32_t x8_2 = *(arg2 + 4)
            v19 = v4 - v5
            v18 = v3 - v1
            
            if (x9_3 != 0)
                uint64_t x9_4 = zx.q(x9_3 - 1)
                
                if (x9_4.d u<= 4)
                    v20 = v6 - v7
                    
                    switch (x9_4)
                        case 1
                            v3 = v20 + v3
                        case 2
                            v3 = *(arg5 + 0xc) + v20 + v3
                        case 3
                            float v17 = *(arg2 + 0x1c)
                            v3 = v3 + v4 + (v6 - v4) * v17 - (v5 + (v7 - v5) * v17)
                        case 4
                            v3 = v4 + (v6 - v4) * (v3 - v5) / (v7 - v5)
                    
                    if (x8_2 u<= 5)
                        switch (x8_2)
                            case 0
                                v1 = v3 - v18
                            case 2
                                v1 = v19 + v1
                            case 3
                                v1 = v16 + v19 + v1
                            case 4
                                v16 = *(arg2 + 0x14)
                                v1 = v1 + v4 + (v6 - v4) * v16 - (v5 + (v7 - v5) * v16)
                            case 5
                                v1 = v4 + (v6 - v4) * (v1 - v5) / (v7 - v5)
                        
                    label_1051258:
                        
                        if (not(v0 > v2) && not(v1 > v3))
                            return 
                        
                        *RECT0
                        *(RECT0 + 4)
                        *(RECT0 + 8)
                        *(RECT0 + 0xc)
                        return 
            else if (x8_2 u<= 5)
                switch (x8_2)
                    case 2
                        v1 = v19 + v1
                    case 3
                        v1 = v16 + v19 + v1
                    case 4
                        v16 = *(arg2 + 0x14)
                        v1 = v1 + v4 + (v6 - v4) * v16 - (v5 + (v7 - v5) * v16)
                    case 5
                        v1 = v4 + (v6 - v4) * (v1 - v5) / (v7 - v5)
                
                if (x8_2 != 0)
                    v3 = v18 + v1
                
                goto label_1051258
else if (x8 u<= 5)
    switch (x8)
        case 2
            v0 = v24 + v0
        case 3
            v0 = v23 + v24 + v0
        case 4
            v23 = *(arg2 + 0x10)
            v0 = v0 + v18 + (v21 - v18) * v23 - (v20 + (v22 - v20) * v23)
        case 5
            v0 = v18 + (v21 - v18) * (v0 - v20) / (v22 - v20)
    
    if (x8 != 0)
        v2 = v19 + v0
    
    goto label_10510b4

pthread_kill(pthread_self(), 6)
return UIDefGet(XNoReturn()) __tailcall
