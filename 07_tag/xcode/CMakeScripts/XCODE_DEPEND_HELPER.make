# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.07_tag_01_aufgabe.Debug:
/Users/abdullah/_UNIVERSITAET/3-FILES/semester_3/anwendungsentwicklung/cpp/07_tag/xcode/Debug/07_tag_01_aufgabe:\
	/usr/local/lib/libopencv_stitching.3.4.1.dylib\
	/usr/local/lib/libopencv_superres.3.4.1.dylib\
	/usr/local/lib/libopencv_videostab.3.4.1.dylib\
	/usr/local/lib/libopencv_aruco.3.4.1.dylib\
	/usr/local/lib/libopencv_bgsegm.3.4.1.dylib\
	/usr/local/lib/libopencv_bioinspired.3.4.1.dylib\
	/usr/local/lib/libopencv_ccalib.3.4.1.dylib\
	/usr/local/lib/libopencv_dnn_objdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_dpm.3.4.1.dylib\
	/usr/local/lib/libopencv_face.3.4.1.dylib\
	/usr/local/lib/libopencv_fuzzy.3.4.1.dylib\
	/usr/local/lib/libopencv_hfs.3.4.1.dylib\
	/usr/local/lib/libopencv_img_hash.3.4.1.dylib\
	/usr/local/lib/libopencv_line_descriptor.3.4.1.dylib\
	/usr/local/lib/libopencv_optflow.3.4.1.dylib\
	/usr/local/lib/libopencv_reg.3.4.1.dylib\
	/usr/local/lib/libopencv_rgbd.3.4.1.dylib\
	/usr/local/lib/libopencv_saliency.3.4.1.dylib\
	/usr/local/lib/libopencv_stereo.3.4.1.dylib\
	/usr/local/lib/libopencv_structured_light.3.4.1.dylib\
	/usr/local/lib/libopencv_surface_matching.3.4.1.dylib\
	/usr/local/lib/libopencv_tracking.3.4.1.dylib\
	/usr/local/lib/libopencv_xfeatures2d.3.4.1.dylib\
	/usr/local/lib/libopencv_ximgproc.3.4.1.dylib\
	/usr/local/lib/libopencv_xobjdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_xphoto.3.4.1.dylib\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtWidgets.framework/QtWidgets\
	/usr/local/lib/libopencv_shape.3.4.1.dylib\
	/usr/local/lib/libopencv_photo.3.4.1.dylib\
	/usr/local/lib/libopencv_dnn.3.4.1.dylib\
	/usr/local/lib/libopencv_datasets.3.4.1.dylib\
	/usr/local/lib/libopencv_ml.3.4.1.dylib\
	/usr/local/lib/libopencv_plot.3.4.1.dylib\
	/usr/local/lib/libopencv_video.3.4.1.dylib\
	/usr/local/lib/libopencv_calib3d.3.4.1.dylib\
	/usr/local/lib/libopencv_features2d.3.4.1.dylib\
	/usr/local/lib/libopencv_highgui.3.4.1.dylib\
	/usr/local/lib/libopencv_videoio.3.4.1.dylib\
	/usr/local/lib/libopencv_phase_unwrapping.3.4.1.dylib\
	/usr/local/lib/libopencv_flann.3.4.1.dylib\
	/usr/local/lib/libopencv_imgcodecs.3.4.1.dylib\
	/usr/local/lib/libopencv_objdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_imgproc.3.4.1.dylib\
	/usr/local/lib/libopencv_core.3.4.1.dylib\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtGui.framework/QtGui\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/abdullah/_UNIVERSITAET/3-FILES/semester_3/anwendungsentwicklung/cpp/07_tag/xcode/Debug/07_tag_01_aufgabe


PostBuild.07_tag_01_aufgabe.Release:
/Users/abdullah/_UNIVERSITAET/3-FILES/semester_3/anwendungsentwicklung/cpp/07_tag/xcode/Release/07_tag_01_aufgabe:\
	/usr/local/lib/libopencv_stitching.3.4.1.dylib\
	/usr/local/lib/libopencv_superres.3.4.1.dylib\
	/usr/local/lib/libopencv_videostab.3.4.1.dylib\
	/usr/local/lib/libopencv_aruco.3.4.1.dylib\
	/usr/local/lib/libopencv_bgsegm.3.4.1.dylib\
	/usr/local/lib/libopencv_bioinspired.3.4.1.dylib\
	/usr/local/lib/libopencv_ccalib.3.4.1.dylib\
	/usr/local/lib/libopencv_dnn_objdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_dpm.3.4.1.dylib\
	/usr/local/lib/libopencv_face.3.4.1.dylib\
	/usr/local/lib/libopencv_fuzzy.3.4.1.dylib\
	/usr/local/lib/libopencv_hfs.3.4.1.dylib\
	/usr/local/lib/libopencv_img_hash.3.4.1.dylib\
	/usr/local/lib/libopencv_line_descriptor.3.4.1.dylib\
	/usr/local/lib/libopencv_optflow.3.4.1.dylib\
	/usr/local/lib/libopencv_reg.3.4.1.dylib\
	/usr/local/lib/libopencv_rgbd.3.4.1.dylib\
	/usr/local/lib/libopencv_saliency.3.4.1.dylib\
	/usr/local/lib/libopencv_stereo.3.4.1.dylib\
	/usr/local/lib/libopencv_structured_light.3.4.1.dylib\
	/usr/local/lib/libopencv_surface_matching.3.4.1.dylib\
	/usr/local/lib/libopencv_tracking.3.4.1.dylib\
	/usr/local/lib/libopencv_xfeatures2d.3.4.1.dylib\
	/usr/local/lib/libopencv_ximgproc.3.4.1.dylib\
	/usr/local/lib/libopencv_xobjdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_xphoto.3.4.1.dylib\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtWidgets.framework/QtWidgets\
	/usr/local/lib/libopencv_shape.3.4.1.dylib\
	/usr/local/lib/libopencv_photo.3.4.1.dylib\
	/usr/local/lib/libopencv_dnn.3.4.1.dylib\
	/usr/local/lib/libopencv_datasets.3.4.1.dylib\
	/usr/local/lib/libopencv_ml.3.4.1.dylib\
	/usr/local/lib/libopencv_plot.3.4.1.dylib\
	/usr/local/lib/libopencv_video.3.4.1.dylib\
	/usr/local/lib/libopencv_calib3d.3.4.1.dylib\
	/usr/local/lib/libopencv_features2d.3.4.1.dylib\
	/usr/local/lib/libopencv_highgui.3.4.1.dylib\
	/usr/local/lib/libopencv_videoio.3.4.1.dylib\
	/usr/local/lib/libopencv_phase_unwrapping.3.4.1.dylib\
	/usr/local/lib/libopencv_flann.3.4.1.dylib\
	/usr/local/lib/libopencv_imgcodecs.3.4.1.dylib\
	/usr/local/lib/libopencv_objdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_imgproc.3.4.1.dylib\
	/usr/local/lib/libopencv_core.3.4.1.dylib\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtGui.framework/QtGui\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/abdullah/_UNIVERSITAET/3-FILES/semester_3/anwendungsentwicklung/cpp/07_tag/xcode/Release/07_tag_01_aufgabe


PostBuild.07_tag_01_aufgabe.MinSizeRel:
/Users/abdullah/_UNIVERSITAET/3-FILES/semester_3/anwendungsentwicklung/cpp/07_tag/xcode/MinSizeRel/07_tag_01_aufgabe:\
	/usr/local/lib/libopencv_stitching.3.4.1.dylib\
	/usr/local/lib/libopencv_superres.3.4.1.dylib\
	/usr/local/lib/libopencv_videostab.3.4.1.dylib\
	/usr/local/lib/libopencv_aruco.3.4.1.dylib\
	/usr/local/lib/libopencv_bgsegm.3.4.1.dylib\
	/usr/local/lib/libopencv_bioinspired.3.4.1.dylib\
	/usr/local/lib/libopencv_ccalib.3.4.1.dylib\
	/usr/local/lib/libopencv_dnn_objdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_dpm.3.4.1.dylib\
	/usr/local/lib/libopencv_face.3.4.1.dylib\
	/usr/local/lib/libopencv_fuzzy.3.4.1.dylib\
	/usr/local/lib/libopencv_hfs.3.4.1.dylib\
	/usr/local/lib/libopencv_img_hash.3.4.1.dylib\
	/usr/local/lib/libopencv_line_descriptor.3.4.1.dylib\
	/usr/local/lib/libopencv_optflow.3.4.1.dylib\
	/usr/local/lib/libopencv_reg.3.4.1.dylib\
	/usr/local/lib/libopencv_rgbd.3.4.1.dylib\
	/usr/local/lib/libopencv_saliency.3.4.1.dylib\
	/usr/local/lib/libopencv_stereo.3.4.1.dylib\
	/usr/local/lib/libopencv_structured_light.3.4.1.dylib\
	/usr/local/lib/libopencv_surface_matching.3.4.1.dylib\
	/usr/local/lib/libopencv_tracking.3.4.1.dylib\
	/usr/local/lib/libopencv_xfeatures2d.3.4.1.dylib\
	/usr/local/lib/libopencv_ximgproc.3.4.1.dylib\
	/usr/local/lib/libopencv_xobjdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_xphoto.3.4.1.dylib\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtWidgets.framework/QtWidgets\
	/usr/local/lib/libopencv_shape.3.4.1.dylib\
	/usr/local/lib/libopencv_photo.3.4.1.dylib\
	/usr/local/lib/libopencv_dnn.3.4.1.dylib\
	/usr/local/lib/libopencv_datasets.3.4.1.dylib\
	/usr/local/lib/libopencv_ml.3.4.1.dylib\
	/usr/local/lib/libopencv_plot.3.4.1.dylib\
	/usr/local/lib/libopencv_video.3.4.1.dylib\
	/usr/local/lib/libopencv_calib3d.3.4.1.dylib\
	/usr/local/lib/libopencv_features2d.3.4.1.dylib\
	/usr/local/lib/libopencv_highgui.3.4.1.dylib\
	/usr/local/lib/libopencv_videoio.3.4.1.dylib\
	/usr/local/lib/libopencv_phase_unwrapping.3.4.1.dylib\
	/usr/local/lib/libopencv_flann.3.4.1.dylib\
	/usr/local/lib/libopencv_imgcodecs.3.4.1.dylib\
	/usr/local/lib/libopencv_objdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_imgproc.3.4.1.dylib\
	/usr/local/lib/libopencv_core.3.4.1.dylib\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtGui.framework/QtGui\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/abdullah/_UNIVERSITAET/3-FILES/semester_3/anwendungsentwicklung/cpp/07_tag/xcode/MinSizeRel/07_tag_01_aufgabe


PostBuild.07_tag_01_aufgabe.RelWithDebInfo:
/Users/abdullah/_UNIVERSITAET/3-FILES/semester_3/anwendungsentwicklung/cpp/07_tag/xcode/RelWithDebInfo/07_tag_01_aufgabe:\
	/usr/local/lib/libopencv_stitching.3.4.1.dylib\
	/usr/local/lib/libopencv_superres.3.4.1.dylib\
	/usr/local/lib/libopencv_videostab.3.4.1.dylib\
	/usr/local/lib/libopencv_aruco.3.4.1.dylib\
	/usr/local/lib/libopencv_bgsegm.3.4.1.dylib\
	/usr/local/lib/libopencv_bioinspired.3.4.1.dylib\
	/usr/local/lib/libopencv_ccalib.3.4.1.dylib\
	/usr/local/lib/libopencv_dnn_objdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_dpm.3.4.1.dylib\
	/usr/local/lib/libopencv_face.3.4.1.dylib\
	/usr/local/lib/libopencv_fuzzy.3.4.1.dylib\
	/usr/local/lib/libopencv_hfs.3.4.1.dylib\
	/usr/local/lib/libopencv_img_hash.3.4.1.dylib\
	/usr/local/lib/libopencv_line_descriptor.3.4.1.dylib\
	/usr/local/lib/libopencv_optflow.3.4.1.dylib\
	/usr/local/lib/libopencv_reg.3.4.1.dylib\
	/usr/local/lib/libopencv_rgbd.3.4.1.dylib\
	/usr/local/lib/libopencv_saliency.3.4.1.dylib\
	/usr/local/lib/libopencv_stereo.3.4.1.dylib\
	/usr/local/lib/libopencv_structured_light.3.4.1.dylib\
	/usr/local/lib/libopencv_surface_matching.3.4.1.dylib\
	/usr/local/lib/libopencv_tracking.3.4.1.dylib\
	/usr/local/lib/libopencv_xfeatures2d.3.4.1.dylib\
	/usr/local/lib/libopencv_ximgproc.3.4.1.dylib\
	/usr/local/lib/libopencv_xobjdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_xphoto.3.4.1.dylib\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtWidgets.framework/QtWidgets\
	/usr/local/lib/libopencv_shape.3.4.1.dylib\
	/usr/local/lib/libopencv_photo.3.4.1.dylib\
	/usr/local/lib/libopencv_dnn.3.4.1.dylib\
	/usr/local/lib/libopencv_datasets.3.4.1.dylib\
	/usr/local/lib/libopencv_ml.3.4.1.dylib\
	/usr/local/lib/libopencv_plot.3.4.1.dylib\
	/usr/local/lib/libopencv_video.3.4.1.dylib\
	/usr/local/lib/libopencv_calib3d.3.4.1.dylib\
	/usr/local/lib/libopencv_features2d.3.4.1.dylib\
	/usr/local/lib/libopencv_highgui.3.4.1.dylib\
	/usr/local/lib/libopencv_videoio.3.4.1.dylib\
	/usr/local/lib/libopencv_phase_unwrapping.3.4.1.dylib\
	/usr/local/lib/libopencv_flann.3.4.1.dylib\
	/usr/local/lib/libopencv_imgcodecs.3.4.1.dylib\
	/usr/local/lib/libopencv_objdetect.3.4.1.dylib\
	/usr/local/lib/libopencv_imgproc.3.4.1.dylib\
	/usr/local/lib/libopencv_core.3.4.1.dylib\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtGui.framework/QtGui\
	/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/abdullah/_UNIVERSITAET/3-FILES/semester_3/anwendungsentwicklung/cpp/07_tag/xcode/RelWithDebInfo/07_tag_01_aufgabe




# For each target create a dummy ruleso the target does not have to exist
/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtCore.framework/QtCore:
/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtGui.framework/QtGui:
/Users/abdullah/Library/Qt/5.10.0/clang_64/lib/QtWidgets.framework/QtWidgets:
/usr/local/lib/libopencv_aruco.3.4.1.dylib:
/usr/local/lib/libopencv_bgsegm.3.4.1.dylib:
/usr/local/lib/libopencv_bioinspired.3.4.1.dylib:
/usr/local/lib/libopencv_calib3d.3.4.1.dylib:
/usr/local/lib/libopencv_ccalib.3.4.1.dylib:
/usr/local/lib/libopencv_core.3.4.1.dylib:
/usr/local/lib/libopencv_datasets.3.4.1.dylib:
/usr/local/lib/libopencv_dnn.3.4.1.dylib:
/usr/local/lib/libopencv_dnn_objdetect.3.4.1.dylib:
/usr/local/lib/libopencv_dpm.3.4.1.dylib:
/usr/local/lib/libopencv_face.3.4.1.dylib:
/usr/local/lib/libopencv_features2d.3.4.1.dylib:
/usr/local/lib/libopencv_flann.3.4.1.dylib:
/usr/local/lib/libopencv_fuzzy.3.4.1.dylib:
/usr/local/lib/libopencv_hfs.3.4.1.dylib:
/usr/local/lib/libopencv_highgui.3.4.1.dylib:
/usr/local/lib/libopencv_img_hash.3.4.1.dylib:
/usr/local/lib/libopencv_imgcodecs.3.4.1.dylib:
/usr/local/lib/libopencv_imgproc.3.4.1.dylib:
/usr/local/lib/libopencv_line_descriptor.3.4.1.dylib:
/usr/local/lib/libopencv_ml.3.4.1.dylib:
/usr/local/lib/libopencv_objdetect.3.4.1.dylib:
/usr/local/lib/libopencv_optflow.3.4.1.dylib:
/usr/local/lib/libopencv_phase_unwrapping.3.4.1.dylib:
/usr/local/lib/libopencv_photo.3.4.1.dylib:
/usr/local/lib/libopencv_plot.3.4.1.dylib:
/usr/local/lib/libopencv_reg.3.4.1.dylib:
/usr/local/lib/libopencv_rgbd.3.4.1.dylib:
/usr/local/lib/libopencv_saliency.3.4.1.dylib:
/usr/local/lib/libopencv_shape.3.4.1.dylib:
/usr/local/lib/libopencv_stereo.3.4.1.dylib:
/usr/local/lib/libopencv_stitching.3.4.1.dylib:
/usr/local/lib/libopencv_structured_light.3.4.1.dylib:
/usr/local/lib/libopencv_superres.3.4.1.dylib:
/usr/local/lib/libopencv_surface_matching.3.4.1.dylib:
/usr/local/lib/libopencv_tracking.3.4.1.dylib:
/usr/local/lib/libopencv_video.3.4.1.dylib:
/usr/local/lib/libopencv_videoio.3.4.1.dylib:
/usr/local/lib/libopencv_videostab.3.4.1.dylib:
/usr/local/lib/libopencv_xfeatures2d.3.4.1.dylib:
/usr/local/lib/libopencv_ximgproc.3.4.1.dylib:
/usr/local/lib/libopencv_xobjdetect.3.4.1.dylib:
/usr/local/lib/libopencv_xphoto.3.4.1.dylib:
