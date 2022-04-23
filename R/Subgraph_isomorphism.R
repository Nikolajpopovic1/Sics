# Hello, world!
#
# This is an example function named 'hello'
# which prints 'Hello, world!'.
#
# You can learn more about package authoring with RStudio at:
#
#   http://r-pkgs.had.co.nz/
#
# Some useful keyboard shortcuts for package authoring:
#
#   Install Package:           'Ctrl + Shift + B'
#   Check Package:             'Ctrl + Shift + E'
#   Test Package:              'Ctrl + Shift + T'
#'This does something
#' @export
#' @param pattern.g does something
#' @param match.g does something
#' @param algorithm does something
#' @param direction does something
#' @param graph_type does something
#' @param constraint does something
#' @param degsort does something
Subgraph_isomorphism <- function(
  pattern.g,
  match.g,
  algorithm="",
  direction="",
  graph_type="",
  constraint="",
  degsort=0

){

  if (!is_igraph(pattern.g)) { stop("Not a graph object") }
  if (!is_igraph(match.g)) { stop("Not a graph object") }

  pattern.vec <- as.integer(as.vector(as_edgelist(pattern.g,names=FALSE)))
  match.vec <- as.integer(as.vector(as_edgelist(match.g,names=FALSE)))
  vertex_color_g1 <- unname(vertex_attr(pattern.g))
  vertex_color_g2 <- unname(vertex_attr(match.g))
  vertex_color_g1 <- lapply(vertex_color_g1,as.character)
  vertex_color_g2 <- lapply(vertex_color_g2,as.character)
  pattern_len <- length(pattern.vec);
  match_len <- length(match.vec);
  pattern_vertex <- length(V(pattern.g));
  match_vertex <- length(V(match.g));
  vertex_color_g1_len <- length(vertex_color_g1);
  vertex_color_g2_len <- length(vertex_color_g2);
  res  <-  subgraph_isomorphism_interface(pattern.vec, match.vec,algorithm,direction,vertex_color_g1,vertex_color_g2,graph_type,constraint,pattern_vertex,match_vertex,degsort)
  lapply(res, function(x)V(match.g)[x])
  pattern.vec
  x.mat
}

