// 函数: sub_6c84d0
// 地址: 0x6c84d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
RECT rect
GetClientRect(data_147b084, &rect)
int32_t right = rect.right

if (right != 0)
    int32_t bottom = rect.bottom
    
    if (bottom != 0)
        void* eax_2 = data_cf65b8
        float xmm1_3 = _mm_cvtepi32_ps(zx.o(right)) * arg1 / _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x14)))
        float xmm1_4
        
        if (0 f<= xmm1_3)
            xmm1_4 = xmm1_3 + 0.5f
        else
            xmm1_4 = xmm1_3 - 0.5f
        
        int32_t result = int.d(xmm1_4)
        
        if (0 f<= _mm_cvtepi32_ps(zx.o(bottom)) * arg2 / _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x18))))
            CookieCheckFunction(result)
            return result
        
        CookieCheckFunction(result)
        return result

CookieCheckFunction(0)
return 0
