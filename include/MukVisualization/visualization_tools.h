#ifndef MUKNO_VISUALIZATION_TOOLS_H
#define MUKNO_VISUALIZATION_TOOLS_H

#include "MukVisualization\muk_visualization_api.h"

#include "MukCommon/muk_common.h"
#include "MukCommon/MukVector.h"
#include "MukCommon/Bounds.h"

#include "MukCommon/IPathPlanner.h"

#include <vtkSmartPointer.h>
#include <vtkPolyData.h>
#include <vtkActor.h>
#include <vtkRenderer.h>

class vtkSphereSource;

namespace gris
{
  namespace muk
  {
    class MukPathGraph;

    class MUK_VIS_API Transformer
    {
      public:
        static DeclVtk(vtkPolyData) createLineSegments(const std::vector<Vec3d>& points);
        static DeclVtk(vtkPolyData) createPoints(const std::vector<Vec3d>& points);

        static vtkSmartPointer<vtkPolyData> createArrows(const std::vector<MukState>& v, double length);
    };

    MUK_VIS_API TypeVtk(vtkPolyData) createBounds(const IBounds& bounds);    
    MUK_VIS_API DeclVtk(vtkRenderer) create3DCoordinateAxis();

    void setToVertices(vtkPolyData* data);
    void setToLines(vtkPolyData* data);
    
  }
}

#endif