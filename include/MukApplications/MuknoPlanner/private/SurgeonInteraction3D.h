#pragma once
#include "private/IMukInteraction.h"

#include "MukCommon/MukVector.h"

#include <vtkInteractorStyleTrackballCamera.h>

namespace gris
{
  namespace muk
  {
    struct AppModels;
    struct AppControllers;

    /**
    */
	
    class SurgeonInteraction3D : public IMukInteraction
    {
      public:
        static SurgeonInteraction3D* New();
        vtkTypeMacro(SurgeonInteraction3D, vtkInteractorStyleTrackballCamera);

      public:
		  SurgeonInteraction3D();

      public:
        // overwrites vtkInteractorStyle API
        virtual void OnLeftButtonDown();
        virtual void OnMouseMove();
        virtual void OnRightButtonDown();
        virtual void OnRightButtonUp();
        virtual void OnMouseWheelForward();
        virtual void OnMouseWheelBackward();
        virtual void OnKeyPress();
        virtual void OnMouseDoubleClick();

        // Mukno API
        virtual void initialize();
        virtual void finalize() {}

      private:
		void resetOrientation();
        void repositionRegion();
        void activateInteraction(const std::string& key);
        
        void cutOutObstacle();

        void createSphere();
        void showClosestPoint();
        void showClosestPointToPath();
        void setDefaultFocus();

        void doDistanceMeasurement(const Vec3d& coords);
        void drawAxesLines(const Vec3d& coords);
        void drawAxesPlanes(const Vec3d& point);

        void toggleDistanceLine();
        void toggleAxes();

        void selectInteraction();
        void moveWaypointImpl();
        void rightClickMenuImpl();

      private:
        struct Impl;
        std::unique_ptr<Impl> mp;
    };
  }
}
