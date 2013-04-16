//-----------------------------------------------------------
//
// Created by Jeffrey Ventrella and added as a utility 
// class for High Fidelity Code base, April 2013
//
//-----------------------------------------------------------

#ifndef __interface__camera__
#define __interface__camera__

#include "Orientation.h"
#include <glm/glm.hpp>

enum CameraMode
{
    CAMERA_MODE_NULL = -1,
    CAMERA_MODE_FIRST_PERSON,
    CAMERA_MODE_THIRD_PERSON,
    CAMERA_MODE_MY_OWN_FACE,
    NUM_CAMERA_MODES
};

static const float DEFAULT_CAMERA_TIGHTNESS = 10.0f;

class Camera
{
public:
    Camera();

	void update( float deltaTime );
	
	void setMode			( CameraMode	m ) { mode				= m; }
	void setYaw				( float			y ) { idealYaw			= y; }
	void setPitch			( float			p ) { pitch				= p; }
	void setRoll			( float			r ) { roll				= r; }
	void setUp				( float			u ) { up				= u; }
	void setDistance		( float			d ) { distance			= d; }
	void setTargetPosition	( glm::vec3		t ) { targetPosition	= t; }
	void setPosition		( glm::vec3		p ) { position			= p; }
	void setTightness		( float			t ) { tightness			= t; }
	void setOrientation		( Orientation	o ) { orientation.set(o); }

    void setMode            ( CameraMode    m ) { _mode             = m; }
    void setYaw             ( float         y ) { _yaw              = y; }
    void setPitch           ( float         p ) { _pitch            = p; }
    void setRoll            ( float         r ) { _roll             = r; }
    void setUp              ( float         u ) { _up               = u; }
    void setDistance        ( float         d ) { _distance         = d; }
    void setTargetPosition  ( glm::vec3     t ) { _targetPosition   = t; };
    void setPosition        ( glm::vec3     p ) { _position         = p; };
    void setOrientation     ( Orientation   o ) { _orientation.set(o);   }
    void setTightness       ( float         t ) { _tightness        = t; }
    void setFieldOfView     ( float         f ) { _fieldOfView      = f; }
    void setAspectRatio     ( float         a ) { _aspectRatio      = a; }
    void setNearClip        ( float         n ) { _nearClip         = n; }
    void setFarClip         ( float         f ) { _farClip          = f; }

    float       getYaw              () { return _yaw;               }
    float       getPitch            () { return _pitch;             }
    float       getRoll             () { return _roll;              }
    glm::vec3   getPosition         () { return _position;          }
    Orientation getOrientation      () { return _orientation;       }
    CameraMode  getMode             () { return _mode;              }
    float       getFieldOfView      () { return _fieldOfView;       }
    float       getAspectRatio      () { return _aspectRatio;       }
    float       getNearClip         () { return _nearClip;          }
    float       getFarClip          () { return _farClip;           }

private:

	CameraMode	mode;
	glm::vec3	position;
	glm::vec3	idealPosition;
	glm::vec3	targetPosition;
	float		fieldOfView;
	float		yaw;
	float		pitch;
	float		roll;
	float		up;
	float		idealYaw;
	float		distance;
	float		tightness;
	Orientation	orientation;
};

#endif
