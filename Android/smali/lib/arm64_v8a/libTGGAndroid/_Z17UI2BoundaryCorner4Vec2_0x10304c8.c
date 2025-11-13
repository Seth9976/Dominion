// 函数: _Z17UI2BoundaryCorner4Vec2
// 地址: 0x10304c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float entry_v1
float v8 = entry_v1
float entry_v0
float v9 = entry_v0
int64_t* x19 = *(gUI2Editor + 0x6008)
int64_t* x8 = *x19

if (x8 == 0)
    if (x19[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19, false, true)
    x8 = *x19

void* x8_2 = *x8
entry_v0 = 0f
float v19 = fconvert.s(-8f)
float v6 = *(x8_2 + 0x10)
float v5 = *(x8_2 + 0x14)
entry_v1 = *V20
float v2 = *(V20 + 4)
float v3 = *(gUI2Editor + 0x603c)
float v16 = *(gUI2Editor + 0x6040)
float v7 = *(gUI2Editor + 0x6044)
float v18 = v6 - entry_v1
float v20 = v5 - v2
float v4 = (entry_v1 + v18 * entry_v0 - v16) * v3
float v17 = v2 + v20 * entry_v0 - v7
entry_v0 = v4 + v19
v17 = v17 * v3
float v21
float v22

if (entry_v0 <= v9)
    v21 = fconvert.s(8f)
    v22 = v4 + v21
    
    if (not(v17 + v21 < v8) && not(v22 < v9) && not(v17 + v19 > v8))
        return 0
    
    v19 = (v2 + v20 * fconvert.s(0.5f) - v7) * v3
    bool cond:2_1 = v19 + v21 < v8
    v21 = fconvert.s(-8f)
    
    if (not(cond:2_1) && not(v22 < v9) && not(v19 + v21 > v8))
        return 1
    
    v20 = (v2 + v20 - v7) * v3
    v22 = fconvert.s(8f)
    
    if (not(v20 + v22 < v8) && not(v4 + v22 < v9) && not(v20 + v21 > v8))
        return 2
else
    v19 = (v2 + v20 * fconvert.s(0.5f) - v7) * v3
    v20 = (v2 + v20 - v7) * v3

v21 = (entry_v1 + v18 * fconvert.s(0.5f) - v16) * v3
v22 = fconvert.s(-8f)
float v23

if (v21 + v22 <= v9)
    v23 = fconvert.s(8f)
    v21 = v21 + v23
    
    if (not(v17 + v23 < v8) && not(v21 < v9) && not(v17 + v22 > v8))
        return 3
    
    if (not(v20 + v23 < v8) && not(v21 < v9) && not(v20 + fconvert.s(-8f) > v8))
        return 4

v21 = (entry_v1 + v18 - v16) * v3
v18 = v21 + v22
float v24

if (v18 <= v9)
    v24 = fconvert.s(8f)
    v23 = v21 + v24
    v22 = fconvert.s(-8f)
    
    if (not(v17 + v24 < v8) && not(v23 < v9) && not(v17 + v22 > v8))
        return 5
    
    if (not(v19 + v24 < v8) && not(v23 < v9) && not(v19 + v22 > v8))
        return 6
    
    v23 = fconvert.s(8f)
    v22 = v20 + v23
    v19 = v20 + fconvert.s(-8f)
    
    if (not(v22 < v8) && not(v21 + v23 < v9) && not(v19 > v8))
        return 7
else
    v19 = v20 + fconvert.s(-8f)
    v22 = v20 + fconvert.s(8f)

entry_v1 = entry_v1 - v16
v6 = v6 - v16
v20 = fconvert.s(8f)
v16 = v17 + fconvert.s(-8f)
v2 = v2 - v7
v7 = v5 - v7
v17 = v17 + v20
v5 = entry_v1 * v3
entry_v1 = v2 * v3
v6 = v6 * v3
v2 = v3 * v7

v3 = v16 < v19 ? v16 : v19

v7 = v17 > v22 ? v17 : v22

v23 = entry_v0 < v5 ? entry_v0 : v6

bool cond:7 = v23 <= v9
v23 = v4 + v20
float v25

if (cond:7)
    v25 = v7 > v2 ? v7 : entry_v1
    
    v24 = v23 > v6 ? v23 : v5
    
    v4 = v3 < entry_v1 ? v3 : v2

int64_t x8_3

if (not(cond:7) || v25 < v8 || v24 < v9 || v4 > v8)
    v4 = v21 + v20
    
    v20 = entry_v0 < v18 ? entry_v0 : v18
    
    entry_v0 = v23 > v4 ? v23 : v4
    
    if (not(v20 < v5))
        v20 = v6
    
    if (v20 <= v9)
        v20 = v17 > v2 ? v17 : entry_v1
        
        v17 = entry_v0 > v6 ? entry_v0 : v5
        
        if (not(v16 < entry_v1))
            v16 = v2
        
        if (v20 < v8 || v17 < v9 || v16 > v8)
            v17 = v22 > v2 ? v22 : entry_v1
            
            v16 = entry_v0 > v6 ? entry_v0 : v5
            
            entry_v0 = v19 < entry_v1 ? v19 : v2
            
            if (v17 < v8 || v16 < v9 || entry_v0 > v8)
                goto label_1030674
            
            x8_3 = 2
        else
            x8_3 = 1
    else
    label_1030674:
        
        entry_v0 = v18 < v5 ? v18 : v6
        
        if (not(entry_v0 <= v9))
            return 0xffffffff
        
        if (not(v7 > v2))
            v7 = entry_v1
        
        if (not(v4 > v6))
            v4 = v5
        
        entry_v0 = v3 < entry_v1 ? v3 : v2
        
        if (v7 < v8 || v4 < v9 || entry_v0 > v8)
            return 0xffffffff
        
        x8_3 = 3
else
    x8_3 = 0

return zx.q(*(x8_3 * 0xc + 0x869268))
