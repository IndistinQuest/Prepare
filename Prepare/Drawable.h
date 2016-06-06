#pragma once

#include <Siv3D.hpp>

/// <summary>
/// 描画するオブジェクトのインターフェース
/// </summary>
class Drawable
{
private:
    const uint32 m_layer;
    bool m_isVisible;
public:
    /// <summary>
    /// コンストラクタ
    /// </summary>
    /// <param name="layer"> 描画するレイヤー番号(0のほうが下) </param>
    Drawable(const uint32 layer);

    /// <summary>
    /// デストラクタ
    /// </summary>
    virtual ~Drawable() = default;
public:
    /// <summary>
    /// 描画する
    /// </summary>
    virtual void draw() const = 0;
    
    /// <summary>
    /// オブジェクトを表示する
    /// </summary>
    void show();

    /// <summary>
    /// オブジェクトを非表示にする
    /// </summary>
    void hide();

    /// <summary>
    /// オブジェクトの表示状態を取得する
    /// </summary>
    /// <returns> 表示状態 </returns>
    bool isVisible() const;

    /// <summary>
    /// レイヤー番号を取得する
    /// </summary>
    /// <returns> レイヤー番号 </returns>
    int getLayer() const;
};

