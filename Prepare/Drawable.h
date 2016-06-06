#pragma once

#include <Siv3D.hpp>

/// <summary>
/// �`�悷��I�u�W�F�N�g�̃C���^�[�t�F�[�X
/// </summary>
class Drawable
{
private:
    const uint32 m_layer;
    bool m_isVisible;
public:
    /// <summary>
    /// �R���X�g���N�^
    /// </summary>
    /// <param name="layer"> �`�悷�郌�C���[�ԍ�(0�̂ق�����) </param>
    Drawable(const uint32 layer);

    /// <summary>
    /// �f�X�g���N�^
    /// </summary>
    virtual ~Drawable() = default;
public:
    /// <summary>
    /// �`�悷��
    /// </summary>
    virtual void draw() const = 0;
    
    /// <summary>
    /// �I�u�W�F�N�g��\������
    /// </summary>
    void show();

    /// <summary>
    /// �I�u�W�F�N�g���\���ɂ���
    /// </summary>
    void hide();

    /// <summary>
    /// �I�u�W�F�N�g�̕\����Ԃ��擾����
    /// </summary>
    /// <returns> �\����� </returns>
    bool isVisible() const;

    /// <summary>
    /// ���C���[�ԍ����擾����
    /// </summary>
    /// <returns> ���C���[�ԍ� </returns>
    int getLayer() const;
};

