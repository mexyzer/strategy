#include "Camera.hpp"

Camera::Camera(const sf::Vector2f & drawableArea) :
    m_cameraRegion({0, 0, drawableArea.x * 0.77f, drawableArea.y * 0.77f}) {
    m_target = m_cameraRegion.getCenter();
}

const sf::Vector2f & Camera::GetOffset() const {
    return m_cameraRegion.getCenter();
}

void Camera::Jump(const sf::Vector2f & position) {
    m_target = position;
    m_cameraRegion.setCenter(position);
}

const sf::View & Camera::GetCameraRegion() const {
    return m_cameraRegion;
}

