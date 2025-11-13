// 函数: sub_63c270
// 地址: 0x63c270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float result
int32_t edx_1

if (data_147cc88 s<= 0)
    CURSORINFO pci
    pci.cbSize = 0x14
    pci.flags = 0
    pci.hCursor = 0
    pci.ptScreenPos.x = 0
    pci.ptScreenPos.y = 0
    GetCursorInfo(&pci)
    POINT point
    
    if ((pci.flags.b & 2) != 0 || *(data_cf65b4 + 0x18) == 0)
        *arg1 = 0
        arg1[1] = 0
    else if (GetCursorPos(&point) != 0)
        ScreenToClient(data_147b084, &point)
        result, edx_1 = sub_6c8420(point.x, point.y)
        goto label_63c2e4
else
    result = data_147cc94
    edx_1 = data_147cc98
label_63c2e4:
    *arg1 = result
    float xmm1_1 = *arg1
    arg1[1] = edx_1
    
    if (not(0f > xmm1_1))
        result = data_cf65b8
        
        if (not(xmm1_1 f>= _mm_cvtepi32_ps(zx.o(*(result i+ 0x14)))))
            float xmm1_2 = arg1[1]
            
            if (not(0 f> xmm1_2))
                float xmm0_4 = _mm_cvtepi32_ps(zx.o(*(result i+ 0x18)))
                xmm1_2 - xmm0_4
                result.b = xmm1_2 < xmm0_4
                return result
result.b = 0
return result
