// 函数: sub_100e1c4
// 地址: 0x100e1c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg5 - arg7

if (not(arg5 != arg7))
    return 

if (arg5 >= arg7)
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
        0xbe4, 
        "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, float, float)", 
        "y0 < y1")
label_100e414:
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
        0xbe5, 
        "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, float, float)", 
        "e->sy <= e->ey")
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
        0xc01, 
        "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, float, float)", 
        "x0 >= x && x0 <= x+1 && x1 >= x && x1 <= x+1")
    return sub_100e458(__assert2(
        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 0xbf8, 
        "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, float, float)", 
        "x1 >= x+1")) __tailcall

float v4 = *(arg3 + 0x18)
float v5 = *(arg3 + 0x1c)

if (v4 > v5)
    goto label_100e414

if (v4 > arg7 || v5 < arg5)
    return 

if (v4 <= arg5)
    v4 = arg5
    
    if (v5 >= arg7)
        v5 = arg7
    else
        arg6 = (v5 - arg7) * (arg6 - arg4) / (arg7 - v4) + arg6
else
    arg4 = (arg6 - arg4) * (v4 - arg5) / (arg7 - arg5) + arg4
    
    if (v5 < arg7)
        arg6 = (v5 - arg7) * (arg6 - arg4) / (arg7 - v4) + arg6
    else
        v5 = arg7

arg5 = float.s(arg2)
arg7 = float.s(arg2 + 1)

if (arg4 != arg5)
    goto label_100e288

if (not(arg6 <= arg7))
    arg1, arg2, arg3, arg4, arg5, arg6, arg7, v4, v5 = __assert2(
        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 0xbf2, 
        "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, float, float)", 
        "x1 <= x+1", arg4, arg5)
label_100e288:
    
    if (arg4 != arg7)
        goto label_100e2b8
    
    if (not(arg6 >= arg5))
        arg1, arg2, arg3, arg4, arg5, arg6, arg7, v4, v5 = __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
            0xbf4, 
            "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, float, "
        "float)", 
            "x1 >= x")
    label_100e2b8:
        
        if (arg4 <= arg5)
            goto label_100e2f8
        
        if (arg4 >= arg7)
            goto label_100e320
        
        if (arg6 < arg5 || not(arg6 <= arg7))
            arg1, arg2, arg3, arg4, arg5, arg6, v4, v5 = __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                0xbfa, 
                "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, "
            "float, float)", 
                "x1 >= x && x1 <= x+1")
        label_100e2f8:
            
            if (not(arg6 <= arg5))
                arg1, arg2, arg3, arg4, arg5, arg6, arg7, v4, v5 = __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                    0xbf6, 
                    "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, "
                "float, float)", 
                    "x1 <= x")
            label_100e320:
                
                if (arg6 < arg7)
                    return sub_100e458(__assert2(
                        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                        0xbf8, 
                        "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, "
                    "float, float, float)", 
                        "x1 >= x+1")) __tailcall

if (not(arg4 > arg5) && not(arg6 > arg5))
    int64_t x8_2 = zx.q(arg2) << 0x20 s>> 0x1e
    *(arg1 + x8_2) = *(arg1 + x8_2) + (v5 - v4) * *(arg3 + 0x14)
    return 

arg7 = float.s(arg2 + 1)

if (not(arg4 < arg7) && arg6 >= arg7)
    return 

if (arg6 > arg7)
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
        0xc01, 
        "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, float, float)", 
        "x0 >= x && x0 <= x+1 && x1 >= x && x1 <= x+1")
    return sub_100e458(__assert2(
        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 0xbf8, 
        "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, float, float)", 
        "x1 >= x+1")) __tailcall

if (arg4 < arg5 || arg4 > arg7 || arg6 < arg5)
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
        0xc01, 
        "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, float, float)", 
        "x0 >= x && x0 <= x+1 && x1 >= x && x1 <= x+1")
    return sub_100e458(__assert2(
        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 0xbf8, 
        "void stbtt__handle_clipped_edge(float *, int, stbtt__active_edge *, float, float, float, float)", 
        "x1 >= x+1")) __tailcall

int64_t x8_4 = zx.q(arg2) << 0x20 s>> 0x1e
*(arg1 + x8_4) = *(arg1 + x8_4) + ((arg4 - arg5 + arg6 - arg5) * fconvert.s(-0.5f) + fconvert.s(1f))
    * (v5 - v4) * *(arg3 + 0x14)
