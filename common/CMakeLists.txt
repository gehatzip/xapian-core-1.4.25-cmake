
target_sources(libxapian 
  PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/alignment_cast.h
	${CMAKE_CURRENT_LIST_DIR}/append_filename_arg.h
	${CMAKE_CURRENT_LIST_DIR}/autoptr.h
	${CMAKE_CURRENT_LIST_DIR}/bitstream.h
	${CMAKE_CURRENT_LIST_DIR}/closefrom.h
	${CMAKE_CURRENT_LIST_DIR}/compression_stream.h
	${CMAKE_CURRENT_LIST_DIR}/debuglog.h
	${CMAKE_CURRENT_LIST_DIR}/errno_to_string.h
	${CMAKE_CURRENT_LIST_DIR}/exp10.h
	${CMAKE_CURRENT_LIST_DIR}/fd.h
	${CMAKE_CURRENT_LIST_DIR}/filetests.h
	${CMAKE_CURRENT_LIST_DIR}/fileutils.h
	${CMAKE_CURRENT_LIST_DIR}/gnu_getopt.h
	${CMAKE_CURRENT_LIST_DIR}/internaltypes.h
	${CMAKE_CURRENT_LIST_DIR}/io_utils.h
	${CMAKE_CURRENT_LIST_DIR}/keyword.h
	${CMAKE_CURRENT_LIST_DIR}/log2.h
	${CMAKE_CURRENT_LIST_DIR}/min_non_zero.h
	${CMAKE_CURRENT_LIST_DIR}/msvc_dirent.h
	${CMAKE_CURRENT_LIST_DIR}/msvcignoreinvalidparam.h
	${CMAKE_CURRENT_LIST_DIR}/noreturn.h
	${CMAKE_CURRENT_LIST_DIR}/omassert.h
	${CMAKE_CURRENT_LIST_DIR}/output.h
	${CMAKE_CURRENT_LIST_DIR}/output-internal.h
	${CMAKE_CURRENT_LIST_DIR}/overflow.h
	${CMAKE_CURRENT_LIST_DIR}/pack.h
	${CMAKE_CURRENT_LIST_DIR}/parseint.h
	${CMAKE_CURRENT_LIST_DIR}/posixy_wrapper.h
	${CMAKE_CURRENT_LIST_DIR}/pretty.h
	${CMAKE_CURRENT_LIST_DIR}/realtime.h
	${CMAKE_CURRENT_LIST_DIR}/replicate_utils.h
	${CMAKE_CURRENT_LIST_DIR}/replicationprotocol.h
	${CMAKE_CURRENT_LIST_DIR}/safedirent.h
	${CMAKE_CURRENT_LIST_DIR}/safefcntl.h
	${CMAKE_CURRENT_LIST_DIR}/safenetdb.h
	${CMAKE_CURRENT_LIST_DIR}/safesysexits.h
	${CMAKE_CURRENT_LIST_DIR}/safesysselect.h
	${CMAKE_CURRENT_LIST_DIR}/safesyssocket.h
	${CMAKE_CURRENT_LIST_DIR}/safesysstat.h
	${CMAKE_CURRENT_LIST_DIR}/safesyswait.h
	${CMAKE_CURRENT_LIST_DIR}/safeunistd.h
	${CMAKE_CURRENT_LIST_DIR}/safewindows.h
	${CMAKE_CURRENT_LIST_DIR}/safewinsock2.h
	${CMAKE_CURRENT_LIST_DIR}/serialise-double.h
	${CMAKE_CURRENT_LIST_DIR}/setenv.h
	${CMAKE_CURRENT_LIST_DIR}/socket_utils.h
	${CMAKE_CURRENT_LIST_DIR}/str.h
	${CMAKE_CURRENT_LIST_DIR}/stringutils.h
	${CMAKE_CURRENT_LIST_DIR}/submatch.h
	${CMAKE_CURRENT_LIST_DIR}/wordaccess.h
	${CMAKE_CURRENT_LIST_DIR}/bitstream.cc
	${CMAKE_CURRENT_LIST_DIR}/closefrom.cc
	${CMAKE_CURRENT_LIST_DIR}/debuglog.cc
	${CMAKE_CURRENT_LIST_DIR}/errno_to_string.cc
	${CMAKE_CURRENT_LIST_DIR}/fileutils.cc
	${CMAKE_CURRENT_LIST_DIR}/io_utils.cc
	${CMAKE_CURRENT_LIST_DIR}/keyword.cc
	${CMAKE_CURRENT_LIST_DIR}/msvc_dirent.cc
	${CMAKE_CURRENT_LIST_DIR}/omassert.cc
	${CMAKE_CURRENT_LIST_DIR}/posixy_wrapper.cc
	${CMAKE_CURRENT_LIST_DIR}/replicate_utils.cc
	${CMAKE_CURRENT_LIST_DIR}/safe.cc
	${CMAKE_CURRENT_LIST_DIR}/serialise-double.cc
	${CMAKE_CURRENT_LIST_DIR}/socket_utils.cc
	${CMAKE_CURRENT_LIST_DIR}/str.cc)

if (BUILD_BACKEND_CHERT_OR_GLASS)
	target_sources(libxapian PRIVATE ${CMAKE_CURRENT_LIST_DIR}/compression_stream.cc)
endif()


target_sources(libgetopt PRIVATE ${CMAKE_CURRENT_LIST_DIR}/getopt.cc)
