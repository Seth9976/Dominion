// 函数: sub_639970
// 地址: 0x639970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm0_7 = *arg1
float temp0 = data_bf21e8.d
xmm0_7 - temp0
int32_t result
result:1.b = (xmm0_7 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, temp0) ? 1 : 0) << 2
    | (xmm0_7 < temp0 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    float xmm0 = arg1[5]
    float temp1_1 = data_bf21f8:4
    xmm0 - temp1_1
    result:1.b = (xmm0 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp1_1) ? 1 : 0) << 2
        | (xmm0 < temp1_1 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        float xmm0_1 = arg1[6]
        float temp2_1 = data_bf21f8:8
        xmm0_1 - temp2_1
        result:1.b = (xmm0_1 == temp2_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_1, temp2_1) ? 1 : 0) << 2 | (xmm0_1 < temp2_1 ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (not(p_5))
            float xmm0_2 = arg1[7]
            float temp3_1 = data_bf21f8:0xc
            xmm0_2 - temp3_1
            result:1.b = (xmm0_2 == temp3_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_2, temp3_1) ? 1 : 0) << 2 | (xmm0_2 < temp3_1 ? 1 : 0)
            bool p_7 = unimplemented  {test ah, 0x44}
            
            if (not(p_7))
                float xmm0_3 = arg1[4]
                float temp4_1 = data_bf21f8.d
                xmm0_3 - temp4_1
                result:1.b = (xmm0_3 == temp4_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_3, temp4_1) ? 1 : 0) << 2 | (xmm0_3 < temp4_1 ? 1 : 0)
                bool p_9 = unimplemented  {test ah, 0x44}
                
                if (not(p_9))
                    float xmm0_4 = arg1[1]
                    float temp5_1 = data_bf21e8:4
                    xmm0_4 - temp5_1
                    result:1.b = (xmm0_4 == temp5_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_4, temp5_1) ? 1 : 0) << 2
                        | (xmm0_4 < temp5_1 ? 1 : 0)
                    bool p_11 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_11))
                        float xmm0_5 = arg1[2]
                        float temp6_1 = data_bf21e8:8
                        xmm0_5 - temp6_1
                        result:1.b = (xmm0_5 == temp6_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_5, temp6_1) ? 1 : 0) << 2
                            | (xmm0_5 < temp6_1 ? 1 : 0)
                        bool p_13 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_13))
                            float xmm0_6 = arg1[3]
                            float temp7_1 = data_bf21e8:0xc
                            xmm0_6 - temp7_1
                            result:1.b = (xmm0_6 == temp7_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_6, temp7_1) ? 1 : 0) << 2
                                | (xmm0_6 < temp7_1 ? 1 : 0)
                            bool p_15 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_15))
                                result.b = 0
                                return result

result.b = 1
return result
