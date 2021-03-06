#pragma once

#include <QtGui>
#include <QtGui/QFrame>
#include <QtGui/QWidget>
#include <iostream>

#include "../GeneratedFiles/ui_camera_para.h"
#include "DataMgr.h"
#include "ParameterMgr.h"
#include "glarea.h"

using namespace std;

class CameraParaDlg : public QFrame
{
	Q_OBJECT
public:
	CameraParaDlg(QWidget *p, ParameterMgr * _paras, GLArea * _area);

	~CameraParaDlg();
	void initConnects();
	void setFrameConent();

private slots:
	bool initWidgets();
  void virtualScan();
  void initialScan();
  void NBVCandidatesScan();
  void showInitCameras(bool is_show);
  void updateTableViewNBVCandidate();
  void updateTabelViewScanResults();
  void showSelectedScannCandidates(QModelIndex index);
  void showSelectedScannedMesh(QModelIndex index);
  void mergeScannedMeshWithOriginal();
  void getCameraHorizonDist(double _val);
	void getCameraVerticalDist(double _val);
  void getCameraMaxDist(double _val);
  void getCameraDistToModel(double _val);

private:
	Ui::camera_paras * ui;
	ParameterMgr * m_paras;
	GLArea * area;

};